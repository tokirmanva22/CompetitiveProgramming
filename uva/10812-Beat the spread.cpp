#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, a, b;
        bool isPossible = false;
        cin >> a >> b;
        x = (a + b) / 2;
        y = (a - b) / 2;
        if((x+y) == a && (x-y) == b)
            isPossible = true;
        if(x >= 0 && y >= 0 && isPossible)
            cout << x << " " << y << endl;
        else
            cout << "impossible\n";
    }

    return 0;
}
