#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n, k, q, a, b, q1 , q2 , res ;
	cin >> n >> k >> q;

	int c[2000002] = {0};

	for(int i = 0; i < n ; i++)
	{
	
		cin >> a  >> b;
		for(int j = a ; j <= b ; j++)
			c[j]++;
		
	}


	for(int i = 0; i < q ; i++)
	{
		res = 0;
		cin >> q1 >>q2 ;
		for(int j = q1 ; j <= q2 ; j++)
			if(c[j] >= k)
				res++;
		cout << res << endl;

	}
	

	return 0;
}
