#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int lg;

struct node
{
 lg lv,tw;

 float vl,wt;

 float ra;
}a[505];

lg n;


void sort(lg l,lg r)
{
     lg i,j;
     float p;
     node temp;

     if(l<r)
     {
            i=l;
            j=r+1;
            
            p=a[l].ra;//bhai yaha finishing  time pe sort kar rahe hai
            do{
                   do i++;
                   while(a[i].ra<p && i<r);
                   
                   do j--;
                   while(a[j].ra>p);
                   
                   if(i<j)
                   {temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                   }
                   
                   }while(i<j);
                   
               temp=a[l];
               a[l]=a[j];
               a[j]=temp;
               sort(l,j-1);
               sort(j+1,r);
               }
               
               }


int main()
{

lg test;
lg ep,fp,bach,nc,sm,w,i,tt;

scanf("%lld",&test);

while(test--)
{
  
 scanf("%lld%lld",&ep,&fp);


 
 tt=fp-ep;//total wt. is tw .. it will be used for calculating

 scanf("%lld",&n);

  for(i=0;i<n;i++)
  {
    scanf("%f%f",&a[i].vl,&a[i].wt);
    a[i].ra=a[i].vl/a[i].wt;
  
   a[i].lv=a[i].vl;
    a[i].tw=a[i].wt;
  }


   if(ep>fp)
 {printf("This is impossible.\n");
  continue;
 }

  sort(0,n-1);

/* //printing 
cout<<"\nPrint\n";
for(i=0;i<n;i++)
cout<<a[i].vl<<"  "<<a[i].wt<<"  "<<a[i].ra<<endl;

cout<<"Check sortrd\n\n";
*/

   sm=0;//stores money counted
    w=0;//abhi  tak jo weight use hoe
   
   bach=tt;//matlab jo weight bach ahai  islia 

   for(i=0;i<n;i++)
   {
     if(bach>=a[i].tw)
      {
          nc=bach/a[i].tw;
 
          sm+=nc*a[i].lv;
    
           bach=bach-nc*a[i].tw;
      }
  }

  if(bach!=0 || sm==0)
   {printf("This is impossible.\n");
  continue;
  } 

  
  printf("The minimum amount of money in the piggy-bank is %lld.\n",sm);
 }

return 0;
}     

