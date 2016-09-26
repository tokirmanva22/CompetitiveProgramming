#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ranks[11];
    string site[11];
    int T;

    cin >> T;
    for(int i = 0; i < T; i++)
    {

        for(int j = 0; j < 10 ; j++)
        {
            cin >> site[j] >> ranks[j];

        }
        //sort(mp.begin(), mp.end());
        int max = -103943;
        for(int j = 0; j < 10 ; j++)
        {
            if(ranks[j]  > max)
                max = ranks[j];
        }
        cout << "Case #" << i+1 << ":" << endl;
        for(int j = 0; j < 10 ; j++)
        {
            if(ranks[j] == max)
                cout << site[j] << endl;
        }
    }

    return 0;
}
