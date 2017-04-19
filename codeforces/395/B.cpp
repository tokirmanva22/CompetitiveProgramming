#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, mid, am, bm;
    cin >> n;
    int ara[n+5];
    for(int i = 0; i < n  ; i++)
    {
        cin >> ara[i];
    }
    mid = ceil(n/2);
    //cout << mid;
    if(n % 2 == 0)
    {
        am = mid -1; bm = mid + 2;
    }
    else
    {
        am = mid-1;
        bm = mid+1;
    }


    //cout << mid ;


    for(int i = 0; i <= (n/4) ; i++)
    {
        swap(ara[am-1], ara[bm-1]);
        am -= 2;
        bm += 2;
    }

    for(int i = 0; i < n  ; i++)
    {
        cout << ara[i] << " ";
    }

    return 0;
}
