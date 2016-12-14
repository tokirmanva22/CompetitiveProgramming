#include <bits/stdc++.h>

using namespace std;
int m, s, k;
int main()
{

    string u, v;
    cin >> m >> s;
    if(!s)
    {
        if(m == 1)
        {
            cout << "0 0" << endl;
        }
        else
            cout << "-1 -1" << endl;
            return 0;
    }
    while(m--)
    {
        v += min(9, s) + '0';
        s -= min(9, s);
    }
    if(s)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    u = v;
    reverse(u.begin(), u.end());
    for(; u[k] == '0' ; k++);
    u[0]++;
    u[k]--;
    cout << u << " " << v << endl;
}
