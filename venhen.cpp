#include<iostream>
#include<cmath>
#include<cstdio>
#define pi  3.14
using namespace std;
int main()
{

float r;
int t;
for( scanf("%d",&t);t--;)
{
scanf("%f",&r);

printf("%0.4f\n",8*(2-sqrt(2))*r*r*r);
}

return 0;
}
