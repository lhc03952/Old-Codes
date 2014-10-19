#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct segm
{
 float x1,y1,x2,y2;
}sg[100];

float x[100],y[100];

bool check(int p,int s)//s th segment pthe point
{

float  rh=(y[p]-sg[s].y1)*(sg[s].x2-sg[s].x1);

 float lh=(x[p]-sg[s].x1)*(sg[s].y2-sg[s].y1);

 if(rh!=lh)
  return false;

float  d1=sqrt( (y[p]-sg[s].y1)*(y[p]-sg[s].y1) + (x[p]-sg[s].x1)*(x[p]-sg[s].x1) );

float  d2=sqrt( (y[p]-sg[s].y2)*(y[p]-sg[s].y2) + (x[p]-sg[s].x2)*(x[p]-sg[s].x2) );

float  db=sqrt( (sg[s].y2-sg[s].y1)*(sg[s].y2-sg[s].y1) + (sg[s].x2-sg[s].x1)*(sg[s].x2-sg[s].x1) );

if( (d1+d2-db)>0.00001f )
return false;

return true;
}

int main()
{
int m,n,i,j,cn,test;

for(scanf("%d",&test);test--;)
{
 //cin>>n>>m;
 scanf("%d%d",&n,&m);

 for(i=0;i<n;i++)
  scanf("%f%f",&x[i],&y[i]);
//  cin>>x[i]>>y[i];


 for(i=0;i<m;i++)
  {
      scanf("%f%f%f%f",&sg[i].x1,&sg[i].y1,&sg[i].x2,&sg[i].y2);
       //cin>>sg[i].x1>>sg[i].y1>>sg[i].x2>>sg[i].y2;
         cn=0;
    
        for(j=0;j<n;j++)
             if(check(j,i))
                cn++;
         printf("%d\n",cn);
   }
                 
}
return 0;
}  

 

