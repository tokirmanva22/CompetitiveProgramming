#include <bits/stdc++.h>

using namespace std;

int main()
{
    float xa[1001], ya[1001], va[1001];
    float cpx, cpy ;
    float minTime = 10000000 , time;
    cin >> cpx >> cpy;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> xa[i] >> ya[i] >> va[i];
    }
    for(int i = 0; i < n ; i++)
    {
        time = sqrt((abs(cpx -xa[i]) * abs(cpx - xa[i])) + (abs(cpy - ya[i]) * abs(cpy - ya[i])));
        time /= va[i];
        if(time < minTime)
            minTime = time;
    }
    printf("%.20f\n", minTime);


}
