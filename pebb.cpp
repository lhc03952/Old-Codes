#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
typedef long long int lg;
int main()
{
char a[5999999];
lg hp=0;

  while(scanf("%s",a)!=EOF)
  {
 hp++;
 lg   l=strlen(a);
   lg  cn=0,j,i;

  for(i=0;i<l; )
 { 
    while(a[i]=='0')
     i++;
  
     if(a[i]=='1')
     {
         i++;     
        for(j=i;j<l;j++)
          if(a[j]=='1')
            a[j]='0';
           else
              a[j]='1';    

        cn++;
     }

  }

 printf("Game #%lld: %lld\n",hp,cn);//Game #1: 3
 
  }

return 0;
}

