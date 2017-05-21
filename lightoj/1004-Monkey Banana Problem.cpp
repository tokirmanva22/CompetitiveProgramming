#include <bits/stdc++.h>

/*
This problem is lightoj dynamic catagory monkey banana  problem(1004) .
Hill climbing algorithm from shafayet planet coding used here .
Problem Status : AC
DATE : 21-05-2017 2.00pm
*/
#define inf 1<<28


using namespace std;

int banana[202][202];
int dp[202][202];
int n;

void read(int N)
{
        for(int p = 1 ; p <= N-1 ; p++)
        {
            for(int q = 1 ; q <= p ; q++)
            {
                scanf("%d", &banana[p][q]);
            }
        }
        int decrement = 0;
        for(int p = N ; p <= 2 * N-1 ; p++)
        {

            for(int q = 1 ; q <= (p - decrement) ; q++)
            {
                scanf("%d", &banana[p][q]);
            }
            decrement = decrement + 2;
        }
        /*
        for(int m = 1 ; m <= N-1 ; m++)
        {
            for(int n = 1 ; n <= m ; n++)
            {
                printf("%d ", banana[m][n]);
            }
            cout << endl;
        }
        decrement = 0;
        for(int m = N ; m <= 2 * N-1 ; m++)
        {

            for(int n = 1 ; n <= (m - decrement) ; n++)
            {
                printf("%d ", banana[m][n]);
            }
            decrement = decrement + 2;
            cout << endl;
        }

        */

}

int call(int i, int j)
{
    if( i >= 1 && i <= (2 * n -1) && j <= i)
    {
        if(dp[i][j] != -1)
            return dp[i][j];
        int ret = -inf ;

        if(i <= n - 1)
        {
            ret = max(ret, call(i+1, j) + banana[i][j]);
            ret = max(ret, call(i+1, j+1) + banana[i][j]);

            return dp[i][j] = ret;
        }
        else
        {
            ret = max(ret, call(i+1, j-1) + banana[i][j]);
            ret = max(ret, call(i+1, j) + banana[i][j]);

            return dp[i][j] = ret;
        }
    }
    else
        return 0;


}


int main()
{
    int T  ;
    scanf("%d", &T);
    for(int f = 1; f <= T ; f++)
    {
        memset(dp, -1, sizeof(dp[0][0])*202 * 202);
        memset(banana, 0, sizeof(dp[0][0])*202 * 202);
        scanf("%d", &n );
        read(n);
        printf("Case %d: %d\n", f ,call(1, 1));

    }


    return 0;
}
