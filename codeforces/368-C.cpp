#include <bits/stdc++.h>

#define lld long long int


using namespace std;

int main()
{
    int b;
    cin >> b;

    for(lld a = 1; a < 1000000000000000; a++)
        for(lld c = 1 ; c <= a ; c++)
    {
        if(b*b == (a - c) * (a + c))
        {
            cout << c << " " << a << endl;
            return 0;
        }

    }
    return 0;
}
