#include <iostream>
#include <stdio.h>
using namespace std;
 typedef long long int lg;
int main()
{
	lg t,i,N,sum,j,r;
	scanf("%lld",&t);
 
	lg arr[100001];
 
	while(t--)
	{
		sum = 0;
		scanf("%lld",&N);
 
		for (i=0; i<N; i++)
		{
			scanf("%lld",&arr[i]);
			sum += arr[i];
		}
 
		lg dp[sum+1];
 
		for (i=0; i<=sum; i++)
		{
			dp[i] = -1;
		}
  

  /*dp[0]=1;
for(int i=0;i<n;i++)
    for(int j=MAXM;j>=arr[i];j--) dp[j]|=dp[arr[i]];       
               
int sum=0;
for(int i=1;i<=MAXM;i++) if(dp[i]) sum+=i;

		for (i=0; i<=sum; i++)
		{
			for (int j=0; j<N; j++)
			{
				if (arr[j] <= i)
				{
					int r = i - arr[j];
 
					if (dp[r] != -1 || r == 0)
					{
						dp[i] = 1;
					}
				}
			}
		}

	*/  
                for (i=0;i<N;i++)    
		{          	
			for (j=sum; j>=arr[i]; j--)
			{
			r=j-arr[i];

                        if(dp[r]!=-1 || r==0)
                         dp[i]=1;	
			}
		}
 
		lg res = 0;
 
		for (i=0; i<=sum; i++)
		{
			if (dp[i] != -1)
			{
				res += i;
			}
 
		}
		//cout << endl;
		printf("%lld\n",res);
	}
 
	return 0;
}
