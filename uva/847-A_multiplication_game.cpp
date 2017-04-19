#include <bits/stdc++.h>

using namespace std;

long long int n;

int game1(int p)
{
    if(p > n)
        return 1;
    if(game1(p*2) == 1 || game1(p*3) == 1 || game1(p*4) == 1 || game1(p*5) == 1 || game1(p*6)==1 \
       || game1(p*7) == 1 || game1(p*8) == 1 || game1(p*9) == 1)
        return 0;
    return 1;
}

int main()
{

    long long int n;
    while(cin >> n)
    {


        if(!game1(1))
            cout << "Stan wins." << endl;
        else
            cout << "Ollie wins." << endl;
    }

    return 0;
}
