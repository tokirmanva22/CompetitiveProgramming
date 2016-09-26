#include <bits/stdc++.h>

using namespace std;

int main()
{
    int G, eachGroupChar ;
    string st;
    while(1)
    {
        cin >> G ;
        if(G == 0)
            break;
        cin >> st;
        //cout << st.length() << endl;
        eachGroupChar = st.length() / G;
        for(int i = 0; st[i] ; i = i + eachGroupChar)
        {
            for(int j = i;  j < (i + (eachGroupChar/2)) ; j++)
            {
                swap(st[j], st[i+eachGroupChar-1-(j - i)]);
            }
        }
        cout << st << endl;
    }

    return 0;
}
