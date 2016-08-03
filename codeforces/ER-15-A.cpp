#include <bits/stdc++.h>

#define lld long long int

using namespace std;

int main()
{
    int n;
    cin >> n ;
    lld ara[n];
    int lmsa = 1;
    int max = 0;//longest maximum sub-array
    for(int i = 0; i < n ; i++)
    {
        cin >> ara[i];
    }
    for(int i = 0; i < n-1 ; i++)
    {
        if(ara[i] < ara[i+1])
            lmsa++;
        else
        {
           max = lmsa;
           lmsa = 1;
        }

    }
    cout << max << endl;
    return 0;
}
