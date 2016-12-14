#include <bits/stdc++.h>

#define lld long long int

using namespace std ;

lld a[25] = {0};
lld c[25] = {0};
int n, d, k;

void calculate(int i)
{

    cout << "In  calculate";
    if(i == 0)
        a[0] = c[0];
    else
        {
        for(int j = i; j < n; j++)
           a[j] = a[j-1] + c[j] * pow(n,j);
        }
    //calculate(i+1);

}

void unknown_array_read()
{
    string st;
    //int ara[100], n;
    cout << "In unknon array read";

    getline(cin , st); //12 23 5 6 8
    n = 0;
    istringstream is(st);
    while(cin>>c[n])n++;

}

void finding_res()
{
    cout << "In finding res";
    while(1)
    {

        if(n * d <= k)
        {
                cout << a[n] << endl;
                break;
        }
        else
            n--;
    }
}

int main()
{
    int c, t;
    lld f;
    cin >> c;
    for(int i = 0; i < c ; i++)
    {
        //unknown_array_read();
        cin >> t;
        for(int l = 0;l  < t ; l++)
        {
            cin >> f;
            c[l] = f;
            //cin >> c[l];

        }
        cin >> d >> k;
        calculate(0);
        finding_res();

    }

    return 0;
}
