#include<iostream>
#include <cstdio>
int main ()//do bar aega , so xor karte rahne pe 2 wala cancel ho jaega
{
	int t;
	int n;
	scanf( "%d\n", &n );
	int answer;
	for( int i=0; i<n; ++i )
	{
		scanf( "%d\n", &t );
		if( i == 0 )
			answer = t;
		else
			answer ^= t;
	}
	printf( "%d\n", answer );
}
