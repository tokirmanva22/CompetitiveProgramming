#include <bits/stdc++.h>

#define lld long long int

using namespace std;

int main()
{
    int n;
    lld temp;
    vector<lld> v;
    while(1)
    {
        cin >> n;
        if(n == 0)
            break;
        for(int i = 0 ; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        for(int i = 0 ; i < n; i++)
        {
            if(i == (n-1))
                cout << v[i] ;
            else
                cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }

    return 0;
}
