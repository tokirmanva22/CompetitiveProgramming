#include <bits/stdc++.h>

using namespace std;

int n , k;
int dp[101][10002];
int coin[105];

int cc(int i , int amount)
{
    if(i >= n)
    {
        if(amount == k)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount] != -1)
        return dp[i][amount];

    int ret1 = 0, ret2 = 0;
    if(amount+coin[i] <= k)
        ret1 = cc(i, amount+coin[i]);
    ret2 = cc(i+1, amount);

    return dp[i][amount] = ret1+ret2;

}

int main()
{
    int T;

    cin >> T;
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i < T ; i++)
    {
        cin >> n >> k;
        for(int j = 0; j < n ; j++)
            cin >> coin[j];


        cout <<"Case " << i+1 << ": " <<cc(0,0) % 100000007 << endl;
    }


    return 0;
}
