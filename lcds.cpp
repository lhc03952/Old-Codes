#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
#define min(a,b) (a>b)?b:a;
int main()
{

char s[5005],t[5005];


scanf("%s",s);


int dp[500][500],i,j,l;

l=strlen(s);

t=strrev(s);

for(i=0;i<=l;i++)
{ 
  dp[i][0]=0;
  dp[0][i]=0;
  
  if(i<l)
  {t[l-i]=t[l-i-1];
  s[l-i]=s[l-i-1];
  }

}


for(i=1;i<=l;i++)
  for(j=1;j<=l;j++)
 {
   if(s[i]==t[j])
    dp[i][j]=dp[i-1][j-1];
  else 
    dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1 );
  }


printf("%d\n",l-dp[l][l]);

return 0;
}
