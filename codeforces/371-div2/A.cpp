#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if(r1 >= k && l2 <= k)
        cout << (r1 - l2) << endl;
    else
        cout << (r1 - l2)+1 << endl;

    return 0;
}
