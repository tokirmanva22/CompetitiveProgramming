#include <bits/stdc++.h>

#define lld long long int

using namespace std;

lld  k;
lld dp[6][30002];
int coin[]= {1, 5 , 10, 25 , 50};

int cc(int i , lld amount)
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
    if(amount - coin[i] >= 0)
        ret1 = cc(i, amount - coin[i]);
    ret2 = cc(i+1, amount);

    return dp[i][amount] = ret1+ret2;

}

int main()
{
    memset(dp, -1, sizeof(dp));
    while(cin >> k)
    {
        lld t = cc(0, k);
        if(t == 1)
            printf("There is only 1 way to produce %lld cents change.\n", k);
        else
            printf("There are %lld ways to produce %lld cents change.\n", t, k);
    }


    return 0;
}
