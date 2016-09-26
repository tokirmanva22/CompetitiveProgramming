#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char ch;

    scanf("%c%d", &ch, &n);
    if((ch == 'a' && (n == 8 || n == 1)) || (ch == 'h' && (n == 8 || n == 1)))
        cout << "3" << endl;
    else if(n == 1 || n == 8)
        cout << "5" << endl;
    else
        cout << "8"<< endl;
    return 0;
}
