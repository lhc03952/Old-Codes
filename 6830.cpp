#include<iostream>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{



int test;
scanf("%d",&test);
 
while(test--)
{

  set<string> ls,al;//stires the losers

  string a,b,back[35];

  int ga,gb,i;


 for(i=0;i<16;i++)
  {
   //scanf("%s%s%d%d",a,b,&ga,&gb);
 cin>>a>>b>>ga>>gb;
    
   if(ga>gb)//matlb b har
      ls.insert(b);
    else
      ls.insert(a);

     if(al.count(a)==0)
        al.insert(a);
      if(al.count(b)==0)
        al.insert(b);
  }

  set<string>::iterator p;
  string mila;
  
  for(p=al.begin();p!=al.end();p++)
       if(ls.count(*p)==0)
         {mila=*p;break;
         }

 cout<<mila<<endl;
}

return 0;
}
     
    
