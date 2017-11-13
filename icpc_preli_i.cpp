#include <bits/stdc++.h>

using namespace std;

int counter = 0,n;

int a[100000];
int dp[100000];

int bigmod(int a , int b, int M)
{
    if(b == 0)
        return 1 % M;
    int x = bigmod(a, b / 2, M);
    x = (x*x) % M;
    if(b % 2 == 1)
        x = (x * a) % M;
    return x;
}


void g(int k)
{
	if(k == n)
	{
	    counter++;
		return ;
	}
	for(int i = 0; i < 2 ; i++)
	{

		if(a[k - 1] == 1 && i == 1)
			return ;
		//counter++;
		a[k] = i;
		g(k + 1);

	}
}


int main()
{
    int t, k , M;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        counter = 0;
        cin >> n >> k >> M;
        a[0] = 0;
        g(0);
        cout << "Case " << i+1 << ": " <<  bigmod(k, counter, M)   << endl;
        //cout << counter << endl;
    }

	//n = 3;

	//cout << counter << endl;
	return 0;
}
