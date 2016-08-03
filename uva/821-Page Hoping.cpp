#include <bits/stdc++.h>

using namespace std;

int node = 0;

int w[106][106] ;

void initialize();
void floyd(int n);
int sum(int n);

int main()
{
    int a = 0, b = 0, k = 1, j = 1, maxB = -123433, result, testCase = 1;
    set<int> s;
    while(1)
    {
        initialize();
        cin >> a >> b;
        s.insert(a);
        s.insert(b);
        if(b > maxB)
            maxB = b;
        if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            while(1)
            {
                w[a][b] = 1;
                cin >> a >> b;
                s.insert(a);
                s.insert(b);
                if(b > maxB)
                    maxB = b;
                if(a == 0 && b == 0)
                {
                    break;
                }
            }
        }
        floyd(maxB);
        printf("Case %d: average length between pages = %.3lf clicks\n",testCase++, sum(maxB) / ((s.size() - 1.0) * (s.size() - 2.0)));
        maxB = 0;
        node = 0;
        s.clear();
    }
    return 0;
}

void floyd(int n)
{
    int k, j, i;
    for(k = 1; k <= n ; k++)
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(w[i][j] > w[i][k]+w[k][j])
                    w[i][j] = w[i][k] + w[k][j];
}
void initialize()
{
    for(int i = 1 ; i <= 105 ; i++)
        for(int j = 1 ; j <= 105 ; j++)
            w[i][j] = 10000005;
}

int sum(int n)
{
    int sum = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++)
            if(i != j && w[i][j] != 10000005 )
            {
                sum += w[i][j];
            }
    return sum;
}
