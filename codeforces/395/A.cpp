#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m, res = 0, z, M, N;
    cin >> n >> m >> z;
    M = m;
    N = n;
    while(n <= z)
    {

        while(m <= z)
        {
            if(n == m)
                res++;
            //cout << "m and n" << m << " " << n << "\n";
            m = m + M;

        }
        m = M;
        n = n + N;

    }
    cout << res << endl;

    return 0;
}
