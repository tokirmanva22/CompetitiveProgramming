#include <bits/stdc++.h>

using namespace std;

int a[100], s[300+1];

void create(int node , int L ,int R);


int main()
{
		
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];

	create(0, 0 , n-1);
	for(int i = 0 ; i < 3*n ; i++)
		cout << i << " " << s[i] << endl;

    return 0;
}



void create(int node , int L ,int R)
{
	int mid;
	if(L == R)
	{
		s[node] = a[L];
		return;
	}

    if(L > R)
    {
    	return ;
    }

    mid = (L + R) / 2;
    int r1, r2;
    cout << "L : " << L << ", R : " << R << endl;
    create(2*node+1, L , mid);
    create(2*node+2, mid+1, R);

    s[node] = s[2*node+1] + s[2*node+2];

    return;

}
