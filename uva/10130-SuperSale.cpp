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
	lld knapsack[1010][35]  = {0};

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
		//sort(a+1, a + N + 1, compare);
		// for(lld i = 1; i <= N ; i++)
		// {
		// 	cout << a[i].P << " "<< a[i].W << "  " << endl ;
		// }
		lld G, MaxBagSize ;		
		lld sum = 0;

		for(lld i = 1 ; i <= N ; i++){
			for(lld j = 0; j <= 30 ; j++)
			{

				if(j >= a[i].W)
					knapsack[i][j] = max(knapsack[i-1][j], a[i].P + knapsack[i-1][j - a[i].W]);
				 else
				 	knapsack[i][j] = knapsack[i-1][j];
				
			}
			
		}
		 

		cin >> G;
		for(lld m = 0; m < G; m++)
		{
			cin >> MaxBagSize;	
			sum += knapsack[N][MaxBagSize];
		}
		cout << sum << endl;
	}
	return 0;
}
