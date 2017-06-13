#include <bits/stdc++.h> 


using namespace std;


int weight[100], n, CAP, profit[100];

int zeroOne(int i , int w)
{
	int profit1 = 0, profit2 = 0;
	if(i == n+1 )
	       return 0;	
	if(w+weight[i] <= CAP)
		profit1 = profit[i] + zeroOne(i+1, w+weight[i]);
	else
		profit1 = 0;

	profit2 = zeroOne(i+1, w );

	return max(profit1, profit2);
}

int main()
{
	
	cin >> n >> CAP;

	for(int i = 1 ; i <= n ; i++)
		cin >> weight[i] >>profit[i] ;	
	cout << zeroOne(1,  0 ) << endl ;

	return 0;

}
