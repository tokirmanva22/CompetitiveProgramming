#include<bits/stdc++.h>

using namespace std;

int table[100][100];

int ncr(int n, int r)
{
	if(r == 1)
		return  n;
	if(n == r)
		return  1;
	if(table[n][r] != -1)
		return table[n][r];
	
	 table[n][r] = ncr(n-1,r) + ncr(n-1, r-1);
	return table[n][r];
}

int main()
{
	memset(table , -1, sizeof(table[0][0]) * 100 * 100 );		
	int m, n;
	cin >> m >> n;	
	cout << ncr(m, n) << endl;	
	
	return 0;
}
