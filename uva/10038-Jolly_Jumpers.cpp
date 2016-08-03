#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n;

	cin >> n;


	int a[n+1] , b[n+1] ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i] ;
		b[i] = 0;

	}
	for(int i = 0 ; i < n - 1 ; i++)
	{
		//b[i] = abs(a[i] - a[i+1]);
		b[abs(a[i] - a[i+1])] = 1;

	}
	bool joly = true;
	for(int i = 1 ; i < n ; i++)
	{
		if(b[i] == 0)
		{
			joly = false;
			break;
		}
	}
	if(joly)
		cout << "joly" << endl;
	else
		cout << "not joly" << endl;



	return 0;
}
