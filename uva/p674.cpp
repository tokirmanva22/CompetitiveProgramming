#include <bits/stdc++.h>

using namespace std;

int  k;
int dp[6][8000];
int coin[]= {1, 5 , 10, 25 , 50};

int cc(int i , int amount)
{
    if(i >= 5)
    {
        if(amount == 0)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount] != -1)
        return dp[i][amount];

    int ret1 = 0, ret2 = 0;
    if(amount -coin[i] >= 0)
        ret1 = cc(i, amount - coin[i]);
    ret2 = cc(i+1, amount);

    return dp[i][amount] = ret1+ret2;

}

int main()
{
    memset(dp, -1, sizeof(dp));
    while(cin >> k)
    {

        //for(int j = 0 ; j < n ; j++)
            //dp[0][j] = -1;
        cout << cc(0,k) << endl;
    }


    return 0;
}

