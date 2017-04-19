#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    set<string> pb, eb;
    int n, m;
    cin >> n >> m;
    string t;
    for(int i = 0; i < n ; i++)
    {
        cin >> t;
        pb.insert(t);
    }
    for(int i = 0; i < m ; i++)
    {
        cin >> t;
        eb.insert(t);
    }
    if(pb.size() > eb.size())
        cout << "YES\n"<< endl;
    else if(pb.size() < eb.size())
        cout << "NO\n" << endl;
    else
    {
        string st;
        st = pb.begin();
        cout << st << endl;
    }
    return 0;
}
