#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
using namespace std;
typedef long long LL;
#define FOR(k,a,b) for(int k(a); k < (b); ++k)
#define REP(k,a) for(int k=0; k < (a); ++k)
 
int main()
{
 
    int n;
    while(scanf("%d",&n) !=EOF)
   {
    vector<int> v(n);
    vector<vector<int> > w(n,vector<int> (n)),s(n,vector<int> (n,100000000));
    REP(i,n)
    {
        cin>>v[i];
        s[i][i]=0;
    }
    REP(i,n)
    {
        w[i][i]=v[i];
        FOR(j,i+1,n)
            w[i][j]=(w[i][j-1]+v[j])%100;
    }
    FOR(len,1,n)
    REP(i,n-len)
    FOR(j,i,i+len)
    {//i,j,j+1,i+len
        if(s[i][i+len]>s[i][j]+s[j+1][i+len]+w[i][j]*w[j+1][i+len])
            s[i][i+len]=s[i][j]+s[j+1][i+len]+w[i][j]*w[j+1][i+len];
    }
    cout << s[0][n-1] << endl;
   }    

return 0;
}


/*sorry I forgot something it must be:
F(i, j) = min(F(i, k) + F(k + 1, j) + C[i][k] * C[k + 1][j]) for i <= k < j
and C[i][j] is sum of the elements x ( i <= x <= j) mod 100.
by the way I used this method and got accepted.*/
