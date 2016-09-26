#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, c = 0;
    while(1)
    {
        cin >> t;
        if(t == 0)
            break;
        ++c;
        int a[t+1], sum = 0, avg, moves = 0;
        for(int i = 0; i < t; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        avg = sum / t;
        //cout << avg;
        for(int i = 0; i < t ; i++)
        {
            //moves += abs(avg - a[i]);
            if(a[i] > avg)
                moves += (a[i] - avg);
            //cout << moves << endl;
        }
        printf("Set #%d\n", c);
        printf("The minimum number of moves is %d.\n\n", moves);

    }
    return 0;
}
