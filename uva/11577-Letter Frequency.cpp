#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char input[210];
    char gar[5];
    cin >> t;
    gets(gar);
    for(int i = 0; i < t ; i++)
    {
        int map[120] = {0};
        gets(input);
        int j = 0, max = 0;
        while(input[j])
        {
            if(isalpha(input[j]))
            {
                char ch  = tolower(input[j]);
                map[ch]++;
                if(map[ch] > max) max = map[ch];
            }
            j++;
        }
        for(int k = 95; k <=120 ; k++ )
        {
            if(map[k] == max)
                printf("%c", k);
        }
        cout << endl;
    }

    return 0;
}
