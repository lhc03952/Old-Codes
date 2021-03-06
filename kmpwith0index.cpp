#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
//////////////////////////////////string matching////////////////
void _Find(string A, string B)
//kmp
{
	int n = A.size();
	int m = B.size();
	int i, j, start;
	vector<int> next(m + 1);
	next[0] = -2;
	next[1] = -1;
	for(i = 2; i < m; ++i)
	{
		j = next[i - 1] + 1;
		while(j >= 0 && B[j] != B[i - 1])
			j = next[j] + 1;
		next[i] = j;
	}
 
	i = j = 0;
	start = -1;
	while(i < n &&  start < 0)
	{
		if(A[i] == B[j]) { i++; j++;  }
		else
		{
			j = next[j] + 1;
			if(j < 0) { j = 0; i++; }
		}
		if(j == m)
                {
                    printf("%d\n", i - m);
                 
                    i = next[i];
                }
        }
}
//////////////////////////////////string matching////////////////
 
 
int main()
{
    freopen("f.in", "r", stdin);
    int len;
    int x = 0;
    string A, B;
    while( scanf("%d", &len) != EOF )
    {
        if(x++) printf("\n");
        cin >> B >> A;
        _Find(A, B);
    }
    return 0;
 
}
