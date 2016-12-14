#include <bits/stdc++.h>

#define lld long long int

using namespace std;

int main()
{
    map<char, int> mp;
    mp['f'] = 1;
    mp['e'] = 2;
    mp['d'] = 3;
    mp['a'] = 4;
    mp['b'] = 5;
    mp['c'] = 6;

    lld result, n, t;
    char ch;
    cin >> n >> ch;
    //cout << n << ch;
    t = (n / 4) - 1;
    n = n % 4;
    //if( n == 0)
        result = t * 16 ;

    if(n == 1 || n == 3)
    {
        result += mp[ch];
    }else if(n == 2 )
    {
        result += (7+mp[ch]);
    }
    cout << result << endl;
    return 0;
}
