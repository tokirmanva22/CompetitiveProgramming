#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a[5] = {1, 3, 7 , 8 , 9};
    cout << upper_bound(a, a+5, 7)-a << endl;
    cout << lower_bound(a, a+5, 1)-a << endl;
    return 0;
}
