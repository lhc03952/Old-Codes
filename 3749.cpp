#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
using namespace std;
typedef long long int lg;

void sort1(lg,lg);
void sort2(lg,lg);
lg mila(lg,lg,lg);
lg a,b,n1,n2,x1,x2,n,cg=0;

multiset<lg> os,ts;
multiset<lg>::iterator lb,up,p,pi;

int main()
{
 lg i,s1[99],s2[99],j,x,sm,cn,y;
 scanf("%lld%lld%lld",&n,&a,&b);

 n1=n/2;//pahle array ko hi likh  lelete hai n1 pahle array me members ki  count hai 
 n2=n-n1;
 for(i=0;i<n1;i++)
 scanf("%lld",&s1[i]);

 for(i=0;i<n2;i++)
 scanf("%lld",&s2[i]);//chalo dusra aarya inputees

 //For first array
//chalo cool hai
 x1=pow(2,n1);
 
 
 for(i=0;i<x1;i++)
 {
   sm=0;

   for(j=0;j<n1;j++)
     if((i&(1<<j))>0)
       sm+=s1[j];
 
  os.insert(sm);
          
 }

/*cout<<"Printtign first array\n";
for(i=0;i<x1;i++)
cout<<a1[i]<<"  ";
cout<<endl;
*///pahla arra complete

//for second array
 x2=pow(2,n2);
 sm=0;

 for(i=0;i<x2;i++)
 {
   sm=0;

   for(j=0;j<n2;j++)//bhai second array n1 se suru hokar n tak jaega
    if((i&(1<<j))>0)
     sm+=s2[j];
 
 ts.insert(sm);         
 }

//chalo dusra bhi insert hoke stored ho gae


cn=0;
p=os.begin();
for(i=0;i<x1;i++)
{
  
  y=*p;
  p++;

 lb=ts.lower_bound(a-y);

 up=ts.upper_bound(b-y);
 up--;

 if( lb!=os.end() && up!=os.end() )
  { 
     pi=up;
     pi++;
     while(lb!=pi)
     {lb++;cn++;}
    
  }
 else if(lb==os.end() && up!=os.end() )
   {
      while(up!=os.begin() )
      {up--;cn++;}
       cn++;//bcz ek valye chhut rahi hai
   }
 else if(lb!=os.end() && up==os.end() )
   {
       while(lb!=os.end() )
      {lb++;cn++;}
   }

}


printf("%lld\n",cn);
return 0;
}



  
 
 

