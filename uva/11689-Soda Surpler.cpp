#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, e, f, c, ans, t;

    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> e >> f >> c;
        t = e + f;
        ans = 0;
        while(1)
        {
            f = t % c;
            t /= c;
            if(t==0)break;
            ans += t;
            t = t + f;
        }
        cout << ans << endl;
    }
    return 0;
}
