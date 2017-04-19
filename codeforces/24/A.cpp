#include <bits/stdc++.h>

using namespace std;

int a, b, c, s[105], d[105] , ans = 0, res = 0;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if(s[a] || d[b]) res += c, s[b] = d[a] = 1;
        else
            s[a] = s[b] = 1;
        ans += c;
    }

    cout << min(res, ans - res) << endl;
  return 0;
}
