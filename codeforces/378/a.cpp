#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin >> st;

    int maxi = 0,mini = -999999;
    int t = 0;


    for(int i = 0; i < st.length(); i++)
    {
        if(st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st\
           [i] == 'O' || st[i] == 'U')
        {
            maxi++;
            i++;
            while(1)
           {
               if(st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st\
           [i] == 'O' || st[i] == 'U')
                break;
               maxi++;
               i++;
           }
            if(maxi > mini)
            {
                mini = maxi;
                maxi = 0;
            }

        }
    }

    cout << mini << endl;
    //cout << st[0] << endl;

    return 0;
}
