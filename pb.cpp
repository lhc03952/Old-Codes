#include<iostream>
#include<cstdio>
using namespace std;
int main()

{
int e,f,n,i,vl[99999],wt[99999],j,sm,mn,cv,test;


cin>>test;

while(test--)
{  

cin>>e>>f;

 cin>>n;
 for(i=0;i<n;i++)
  cin>>vl[i]>>wt[i];


 int dp[99999]={0};///here inedx denotes the  weight upto what has taken

 dp[0]=0;

 sm=0;

 for(i=1;i<=f-e;i++)
 { 
   mn=9999999;
   for(j=0;j<n;j++)
    {  
       if(wt[j]<=i)
        cv=dp[i-wt[j] ]+vl[j];
        if(cv<mn)
         mn=cv;   
    }
           
  dp[i]=mn;
 }
 
 if(dp[f-e]==0)
  cout<<"This is impossible.\n";
 else
  printf("The minimum amount of money in the piggy-bank is %d.\n",dp[f-e]);

}

return 0;
}
