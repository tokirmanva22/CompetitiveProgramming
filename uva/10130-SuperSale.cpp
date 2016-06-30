#include <iostream>
#include <bits/stdc++.h>

#define lld long long int

using namespace std;


struct objects{
			lld P;
			lld W;
	};
	bool compare(objects a, objects b)
	{
		return a.P > b.P;
	}

int main()
{
	lld T, N;
	cin >> T ;

	for(lld f = 0 ; f < T ; f++)
	{

	cin >> N;
	objects a[N+1];
	for(lld i = 1; i <= N ; i++)
	{
		cin >> a[i].P >> a[i].W ;
	}
	sort(a, a + N +1, compare);
	lld G, MaxBagSize = -111111;
	cin >> G;
	lld peopleCapacity[G + 1];
	for(lld i = 0; i < G; i++)
	{
		cin >> peopleCapacity[i];
		if(MaxBagSize < peopleCapacity[i])
			MaxBagSize = peopleCapacity[i];

	}

	lld knapsack[N+1][MaxBagSize+1] ;
	for(lld i = 0 ; i <= N ; i++)
		for(lld j = 0; j <= MaxBagSize ; j++)
		{
			knapsack[i][j] = 0;

		}

	for(lld i = 1 ; i <= N ; i++)
		for(lld j = 1; j <= MaxBagSize ; j++)
		{

			if(j > a[i].W)
				knapsack[i][j] = max(knapsack[i-1][j], a[i].P + knapsack[i-1][j - a[i].W]);
			else
				knapsack[i][j] = knapsack[i-1][j];

		}

	
		
	lld sum = 0;
	for (lld i = 0; i < G; ++i)
	{
		sum += knapsack[N][peopleCapacity[i]];
	}

	cout << sum << endl;

	}

	return 0;
}
