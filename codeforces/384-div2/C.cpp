#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n;
    int x, y, z;
    cin >> n;
    for( x = 1; x <= 100000000 ; x++)
        for(int y = 1; y <= 100000000 ; y++)
            for(int z = 1; z <= 100000000 && (x != y && x != z && y != z) ; z++)
    {
        if((2.0/n) == ((1.0/x)+(1.0/y)+(1.0/z)))
        {
            cout << x << " " << y << " " << z << endl;
            return 0;
        }


    }
    cout << "-1" << endl;

    return 0;
}
