#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t = 1;
    while(scanf("%d" , &n) != EOF)
    {
        int a[n];
        for(int i = 0; i < n ; i++)
        {
            scanf("%d", &a[i]);
        }
        long long int max = -123453, prod = 1;
        for(int p = 0 ; p < n ; p++)
        {
            for(int i = p ; i < n ; i++)
            {
                for(int j = p ; j <= p ; j++)
                    prod *= a[j];
                if(prod > max)
                    max = prod;
            }
        }
        printf("Case #%d: The maximum product is %lld\n", t++, max);

    }

    return 0;
}
