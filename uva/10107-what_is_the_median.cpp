#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> ara;
int main()
{
	while(scanf("%d", &n) == 1)
	{
		ara.push_back(n);
		sort(ara.begin() , ara.end());
		if(ara.size() % 2 == 0)
			printf("%d\n", (ara[ara.size()/2] + ara[ara.size()/2 - 1])/2 );
		else
			printf("%d\n", ara[ara.size()/2]);

	}
	return 0;
}