#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int T, ara[99], ans, N;
    string s;
    cin >> T;
    getline(cin, s);
    while(T--)
    {
        getline(cin, s);
        istringstream is(s);
        N = 0;
        while(is >> ara[N])
            N++;
        ans = 0;
        for(int i = 0; i < N; i++)
            for(int j = i + 1; j < N ; j++)
                ans = max(ans, gcd(ara[i], ara[j]));

            cout << ans << endl;
    }
    return 0;
}

