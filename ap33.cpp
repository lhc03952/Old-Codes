#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
     int t;
 for( scanf("%d",&t);t--; )
 {  

    long long p,q,r,term=0,mila,ia,ib,ic,a2,d2,n2;
 
    long double n,a1,d,a,b,c;
  
     cin>>a>>b>>c;

      n=(0.5*(7*a+5*b+2*c)/(a+b)+sqrtl(((3.5*a+2.5*b+c)/(a+b))*((3.5*a+2.5*b+c)/(a+b))-12*c/(a+b)));
      d=(b-a)/(n-6);
      a1=(a-(2*d));
      

      a2=llrintl(a1);
       d2=llrintl(d);
        n2=llrintl(n);



    mila=0;
 
    ia=llrintl(a);
    ib=llrintl(b);
    ic=llrintl(c);
   
 

 
  if(ia==a2+2*d2)
    if(ib==a2+(n2-4)*d2)
      if(ic*2== (n2*(2*a2+(n2-1)*d2)) )
       mila=1;

 
  if(mila==0)
   {
 
    n=(0.5*(7*a+5*b+2*c)/(a+b)-sqrtl(((3.5*a+2.5*b+c)/(a+b))*((3.5*a+2.5*b+c)/(a+b))-12*c/(a+b)));
      d=(b-a)/(n-6);
      a1=(a-(2*d));
      

      a2=llrintl(a1);
       d2=llrintl(d);
        n2=llrintl(n);
    }
    
  //cout<<a2<<"   "<<d2<<"   "<<n2<<endl;
 long long int  sm=a2,cn;
   printf("%lld\n",n2);
    for(cn=0;cn<n2;cn++)
   {  
     printf("%lld ",sm);
     sm+=d2;
   }

  printf("\n");
 

}

return 0;
}

