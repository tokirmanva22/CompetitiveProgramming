#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n;
    while(cin >> n)
    {
        int p = 1, count = 0;
        while(p <= n)
        {
            p = p * 9;
            count++;
        }
        if(count % 2 != 0)
            cout << "Stan wins." << endl;
        else
            cout << "Ollie wins." << endl;
    }

    return 0;
}
