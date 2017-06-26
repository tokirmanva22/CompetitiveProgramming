#include <bits/stdc++.h>

using namespace std;

int w[20][20];
int dp[1 << 16 + 5];
int n;

int Set(int N, int pos)
{
	return N = N | (1 << pos) ;

}

int reset(int N, int pos)
{
	return N = N & ~(1 << pos);

}

bool check(int N, int pos)
{
	return (bool) (N & (1<< pos));

}
int call(int mask)
{
	if(mask == (1 << n) -1 ) return 0;

	if(dp[mask] != -1) return dp[mask];

	int mx = INT_MIN ;

	int male = __builtin_popcount(mask);
	for(int i = 0; i < n ; i++)
	{
		if(check(mask, i) == 0)
		{
			

			int ret = w[male][i] + call(Set(mask, i));
			mx = max(mx, ret);

		}

	}

	return dp[mask] = mx;



}


int main()
{
	int t;
	cin >> t;
	for(int k = 0; k < t ; k++)
	{

	
	memset(dp, -1, sizeof(dp));
	cin >> n;

	for(int i = 0 ; i < n ; i++)
		for(int j = 0; j < n ; j++)
			scanf("%d", &w[i][j]);
	int ret = call(0);
	printf("Case %d: %d\n",k+1,  ret);
	
	
	}

	return 0;
}
