#include <bits/stdc++.h>

using namespace std;

int main()
{
	int mishka = 0, chris = 0;

	int n = 0, m, c;

	cin >> n;
	for(int i = 0; i < n ; i++)
	{
		cin >> m >> c;
		if(m > c)
			mishka++;
		else if(m < c)
			chris++;
		

	}
	if(mishka > chris)
		cout << "Mishka" << endl;
	else if(chris > mishka)
		cout << "Chris" << endl;
	else
		cout << "Friendship is magic!^^" << endl;

	return 0;
}