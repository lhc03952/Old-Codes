#include<iostream>
#include<cstdio>
typedef  long long int lg;
lg vl[5999999]={0};
lg fc(lg n)
{
lg x;
if(n<12)
return n;

if(vl[n]!=0)
return vl[n];


x=fc(n/2)+fc(n/3)+fc(n/4);

if(x<n)
x=n;

vl[n]=x;

return x;

}

int main()
{

lg n;
scanf("%lld",&n);

printf("%lld\n",fc(n) );

return 0;

}
