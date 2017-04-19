#include <bits/stdc++.h>

using namespace std;

int ara[55];

void fibo()
{
    ara[1] = 1;
    ara[2] = 2;
    for(int i = 3; i < 51 ; i++)
    {
        ara[i] = ara[i-2] + ara[i-1];
    }
}

int main()
{
    int c;
    fibo();
    while(1)
    {
        cin >> c;
        if(c == 0)
            break;
        cout << ara[c] << endl;
    }

}
