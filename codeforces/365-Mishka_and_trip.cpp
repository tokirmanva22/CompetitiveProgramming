#include <bits/stdc++.h>

#define INF 100000

using namespace std;

int main()
{

	int n , k, sum = 0, i , j;
	cin >> n >> k;

	 int c[n] , id[k];
	 int adj[n][n];
	//memset(adj, 0 , sizeof(adj[n]));
	 for(i = 0; i < n ; i++)
	 	cin >> c[i];
	 for(i = 0 ; i < k ; i++)
	 	cin >> id[i];
	for( i = 0 ; i < n ; i++)
		for( j = 0; j < n ; j++)
		{
			adj[i][j] = INF;
		}
	for( i = 0; i < n - 1 ; i++)		
			adj[i][i+1] = c[i] * c[i+1];

	adj[n - 1][0] =  c[n - 1] * c[0];

	for( i = 0; i < k ; i++)
		for( j = 0 ; j < n ; j++)
		{
			if(i != j )
				adj[j][id[i] - 1] = (c[j] * c[id[i]])/2;
		}

	for( i = 0 ; i < n ; i++)
	{
		for( j = 0 ; j < n ; j++)
		{
			if(adj[i][j] != INF && i != j)
				sum += adj[i][j];
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}
		
	cout << sum << endl;

	return 0;

}