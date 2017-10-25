#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    char a;
    cin >> n ;
    map<int, int> mp;

    int minIndex = 193234234 , ans = 0, oneCount = 0;
    mp[0] = 0;

    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a;
        if(a == '1')
            oneCount++;
        else
            oneCount--;


        if(mp.count(oneCount))
            ans = max (ans,  i - mp[oneCount]);
        else
            mp[oneCount] = i;

        //ans = max()

    }
    cout << ans << endl;



    return 0;
}
