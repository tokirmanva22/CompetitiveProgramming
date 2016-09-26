#include <bits/stdc++.h>

using namespace std;

int main()
{

    int T, N;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int freq[10] = {0}, num ;
        cin >> N;
        for(int j = 1; j <= N ; j++)
        {
            num  = j;
            do{
                freq[num % 10]++;
                num /= 10;
            }while(num != 0);
        }
        for(int j = 0 ; j < 9 ; j++)
            cout << freq[j] << " ";
        cout << freq[9] << endl;
    }

}
