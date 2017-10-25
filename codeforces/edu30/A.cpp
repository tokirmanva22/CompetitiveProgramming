#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, k , x;

    cin >> n >> k >> x;

    int a[n];
    for(int i = 0; i < n; i++)
    {

        cin >> a[i];

    }

    int sum = 0;

    for(int i = 0 ; i < n - k ; i++)
        sum += a[i];
    sum += (k*x);

    cout << sum << endl;

    return 0;
}
