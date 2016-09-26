#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row, column;
    cin >> row >> column;

    char ara[row][column];
    bool white = true;
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0; j < column ; j++)
        {
            cin >> ara[i][j];

        }
    }

    for(int i = 0; i < row ; i++)
    {
        for(int j = 0; j < column ; j++)
        {
            if(ara[i][j] == 'C' || ara[i][j] == 'M' || ara[i][j] == 'Y')
            {
                white = false;
                break;
            }
        }
    }
    if(white)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;


    return 0;
}
