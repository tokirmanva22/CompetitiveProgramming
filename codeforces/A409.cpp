#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, out;
    char b[100+5];
    bool isImpossible = false;
    //b = "";
    cin >> a >> out ;

    for(int i = 0; out[i] ; i++)
    {
        if(a[i] ==  out[i])
        {
           //char temp = a[i];
           //cout << temp;

            b[i] = a[i];


           //printf("%d\n", a[i]);
        }else if(a[i] > out[i])
        {
            b[i] = out[i];
            //cout << "here" << b[i] << endl;
        }else if(a[i] < out[i])
        {
            isImpossible = true;
        }




    }
    //cout << b << endl;
    if(isImpossible)
    {
        cout << "-1\n" << endl;

    }
    else
    {
        for(int i = 0; out[i] ; i++)
        {
            cout << b[i] ;
        }
        cout << endl;
    }

    return 0;
}
