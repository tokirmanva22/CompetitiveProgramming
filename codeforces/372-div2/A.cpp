#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n+5], res;
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    res = 1;
    for(int i = 0; i < n - 1 ; i++)
    {
        if((a[i+1] - a[i]) <= t)
            res++;
        else if((a[i+1] - a[i]) > t)
            res = 1;
    }
    cout << res << endl;
    return 0;
}
