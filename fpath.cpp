#include<iostream>
#include<map>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int a[25];
int flag=1;
map<long long ,int> dp;
map<long long ,int> pre;
long long int res,path;
long long int m;
 
void f(long long int p,int cur)
{
  if(p==1)
    flag=0;
  if(p==0)
    return;
  if(flag) {
    for(int i=cur;i>=0;i--) {
      if(p%a[i]==0) {
        if(dp[p/a[i]]==0) {
          //cout<<a[i]<<"   ";
          //system("pause");
          dp[p/a[i]]=dp[p]+1;
          pre[p/a[i]]=i;
          f(p/a[i],i);
        }
        else if(dp[p/a[i]]>dp[p]+1) {
            dp[p/a[i]]=dp[p]+1;
            pre[p/a[i]]=i;
            f(p/a[i],i);
        }
      }
    }      
  }
}
 
void sex(long long int i)
{
  if(i<m) {
    cout << i << " ";
    sex(i*a[pre[i]]);
  }
  else if(i==m) {
    cout << i << endl;
  }
}
 
int main()
{
  int temp,min,index;
  int n;
 
  while(scanf("%lld%d",&m,&n)!=EOF) {
    dp.clear();
    pre.clear();
                                 
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    flag=1;
    f(m,n-1);
 
    if(flag) {
      cout<<"-1"<<endl;
    }
    else {
      cout<<dp[1]<<endl;
      sex(1);
    }
  }
  return 0;
}

