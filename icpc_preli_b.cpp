#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[105];
    //memset(a, 1000, sizeof(a));
    for(int i = 0; i < 105 ; i++)
        a[i] = 1000;
    a[104] = 400;
    a[103] = 300;
    a[101] = a[102] = 500;
    cout << "104" << endl;
    for(int i = 0 ; i < 104 ; i++)
    cout << a[i] << " ";
    cout << a[104] << endl;
    return 0;
}
