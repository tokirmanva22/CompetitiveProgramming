#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, a = 0, d = 0, f = 0;

    cin >> n;
    char str[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> str[i];

    }
    for(int i = 0; i < n ; i++)
    {
        if(str[i] == 'A')
            a++;
        else if(str[i] == 'D')
            d++;

    }
    if(a > d)
        cout << "Anton" << endl;
    else if(a < d)
        cout << "Danik" << endl;
    else if( a == d)
        cout << "Friendship" << endl;

    return 0;
}
