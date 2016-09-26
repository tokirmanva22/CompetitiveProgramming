#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, R, t;
    int iter = 1;
    while(1)
    {
        cin >> R >> N;
        if(!R && !N)
            break;
        t = ceil((R - N)/(N*1.0));
        if( t <= 26)
            printf("Case %d: %d\n", iter++, t);
        else
            printf("Case %d: impossible\n", iter++);
    }
    return 0;
}
