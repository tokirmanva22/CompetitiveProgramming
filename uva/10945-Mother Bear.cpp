#include <bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    vector<char> v;
    bool palindrome = true;
    while(1)
    {
        getline(cin, st);
        if(st.compare("DONE") == 0)
            break;
        for(int i = 0 ; i < st.length(); i++)
        {
            if(isalpha(st.at(i)))
                v.push_back(tolower(st.at(i)));
        }
        int length = v.size();
        for(int i = 0 ; i < (length/2) ; i++)
        {
            //cout << v[i] << " " ;
            if(v[i] != v[length - i - 1])
            {
                palindrome = false;
                break;
            }
        }
        if(palindrome)
            cout << "You won't be eaten!" << endl;
        else
            cout << "Uh oh.." << endl;
        palindrome = true;
        v.clear();
    }

    return 0;
}
