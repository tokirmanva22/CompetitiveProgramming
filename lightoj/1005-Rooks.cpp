#include <bits/stdc++.h>

using namespace std;

#define lld long long int
lld table[35][35];

lld nCr(lld n, lld r)
{
	if( n < r)
		return 0;
	if(r == 0)
		return 1;
	if( r == 1)
		return n;
	if(n == r)
		return 1;
	if(table[n][r] != -1)
		return table[n][r];

	table[n][r] = nCr(n-1, r) + nCr(n-1, r-1);

	return table[n][r];

}

lld fact(lld n)
{
	lld ret = 1;
	for(lld i = 1; i <= n ; i++)
		ret *= i;
	return ret;

}



int main()
{
	int t;
	cin >> t;
	memset(table, -1 , sizeof(table[0][0])*35 * 35);
	for(int j = 0; j < t; j++)
	{

	int n, k;
	cin >> n >> k;
	
	printf("Case %d: %lld\n",j+1, nCr(n,k)*nCr(n, k)*fact(k));


	}

	return 0;

}
