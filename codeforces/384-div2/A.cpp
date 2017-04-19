#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, result = 0;
    string s;
    cin >> n >> a >> b;
    cin >> s;

    if(s[a-1] == s[b-1])
    {
        cout << "0" << endl;
        return 0;
    }
    else if(a < b )
    {
        bool t = false;
        for(int i = a ; i < b ; i++)
        {
            if(s[i] == s[b-1])
            {
                result = abs(a-i+1);
                t = true;
                break;
            }
            if(!t)
                result = abs(b-a);

        }
    }
    else if(a > b )
    {
        bool t = false;
        for(int i = a-2 ; i > b ; i++)
        {
            if(s[i - 1] == s[b])
            {
                result = abs(a-i+1);
                t = true;
                break;
            }
            if(!t)
                result = abs(b-a);

        }
    }
    else
        result = 0;

    cout << result << endl;

    return 0;
}
