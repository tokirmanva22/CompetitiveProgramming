#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> boys, girls;
    int n, m, t, result = 0;
    cin >> n ;
    for(int i = 0; i < n ; i++)
    {
        cin >> t;
        boys.push_back(t);
    }
    cin >> m;
    for(int i = 0; i < m ; i++)
    {
        cin >> t;
        girls.push_back(t);
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    for(int i = 0; i < n ; i++)
        for(int j = 0; j < m ; j++)
        {
            if(abs(boys[i]-girls[j]) <= 1)
            {
                girls[j] = 1000;
                result++;
                break;
            }
        }
        cout << result << endl;
    return 0;
}
