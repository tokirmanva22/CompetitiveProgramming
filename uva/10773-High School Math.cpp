#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    float d, u, v, p;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> d >> v >> u;
        if(v >= u || u == 0 || v == 0)
        {
            //cout << "Case "<< "" <<:" can't determine" << endl;
            printf("Case %d: can't determine\n", i+1);
            continue;
        }
        p = (d / u) - (d / sqrt(u*u - v*v));
        printf("Case %d: %.3f\n", i+1, p*-1);
    }

    return 0;
}
