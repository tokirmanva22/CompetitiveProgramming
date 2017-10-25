#include <bits/stdc++.h>


using namespace std;

int main()
{
    vector<int> k;
    vector<int> m;

    int n, t;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }

    for(int i = 0; i < n ; i++)
        for(int j = 0; j < n ; j++)
            for(int l = 0; l < n ; l++)
            {
                k.push_back(a[i]*a[j]+a[l]);

            }

    for(int i = 0; i < n ; i++)
    {
        if(a[i] == 0)
            continue;
        for(int j = 0; j < n ; j++)
            for(int l = 0; l < n ; l++)
            {
                t = a[i]*(a[j]+a[l]);
                m.push_back(t);
            }

    }
    sort(k.begin(), k.end());
    sort(m.begin(), m.end());

     int sum = 0;
    for(int i = 0 ; i < k.size() ; i++)
        sum += upper_bound(m.begin(), m.end(), k[i])- lower_bound(m.begin(), m.end(), k[i]);
    cout << sum << endl;


    return 0;
}
