#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k2, k3, k5, k6, min2561 = 1323432423, min321 = 2352341234;
    int min2562, min322;
    int k21, k31, k51, k61;

    cin >> k2 >> k3 >> k5 >> k6;
        k21 = k2;
        k31 = k3;
        k51 = k5;
        k61 = k6;
        //if(k2 < min256)
            min2561 = k2;
        if(k5 < min2561)
             min2561 = k5;
        if(k6 < min2561)
            min2561 = k6;
        k2 -= min2561;
        k5 -= min2561;
        k6 -= min2561;
        //cout << min256 * 256 << endl;
        //if(k2 < k3)
            min321 = k2;
        if(k3 < k2)
            min321 = k3;
        //cout << (min256*256) + (min32*32) << endl;
        //2nd part
            min2562 = k21;
        if(k51 < min2562)
             min2562 = k51;
        if(k61 < min2562)
            min2562 = k6;
        k21 -= min2562;
        k51 -= min2562;
        k61 -= min2562;
        //cout << min256 * 256 << endl;
        //if(k2 < k3)
            min322 = k21;
        if(k31 < k21)
            min322 = k31;

        if(((min2561*256) + (min321*32)) < ((min2562*256) + (min322*32) ))
            cout << (min2562*256) + (min322*32) << endl;
        if(((min2561*256) + (min321*32)) > ((min2562*256) + (min322*32) ))
            cout << (min2561*256) + (min321*32) << endl;
        if(((min2561*256) + (min321*32)) == ((min2562*256) + (min322*32) ))
            cout << (min2561*256) + (min321*32) << endl;



    return 0;
}
