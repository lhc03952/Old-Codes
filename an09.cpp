#include<iostream>
#include<cstdio>
typedef long long int lg;

lg gc(lg a, lg b)
{
if (b==0)
    return a;
else
   return gc(b, a%b);
}


int main()
{

lg n1,n2,an;

scanf("%lld%lld",&n1,&n2);

 while( n1!=0 && n2!=0)
{

/*lc=n1*n2/gc(n1,n2);

x=lc/n1;

y=lc/n2;

*/

an=(n1/gc(n1,n2) )*(n2/gc(n1,n2) );


printf("%lld\n",an);


scanf("%lld%lld",&n1,&n2);

}

return 0;
}

