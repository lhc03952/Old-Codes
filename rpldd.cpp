#include<iostream>
#include<cstdio>
#include<set>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int k,t,n,r,i,mila,id,sc;

scanf("%d",&t);

 for(k=1;k<=t;k++)
 {
  
  scanf("%d%d",&n,&r);
   
   set<int> db[n+1];//vecot nabaya hai usle lia
 
   mila=0;
  
  pair<set<int>::iterator,bool> rt;
 
   for(i=0;i<r;i++)
   {
    scanf("%d%d",&id,&sc);
     
      if(mila==0)
      { 
       rt=db[id].insert(sc);
       if(rt.second==false)
          mila=1;
      }    
   }//end for
 

  if(mila==0)
  printf("Scenario #%d: possible\n",k);
  else 
  printf("Scenario #%d: impossible\n",k);
  
  }

return 0;
}
   
 

