#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, page, minPage, maxPage;
    while(cin >> n)
    {
        if(n == 0)
            break;
        page = ceil(n / 4.0);
        minPage = 1, maxPage = 4 * page;
        printf("Printing order for %d pages:\n",n);
        for(int i = 1; i <= page ; i++)
        {
            if(n == 1)
            {
                printf("Sheet %d, front: Blank, %d\n", i, minPage++);
            }
            else if(maxPage > n)
            {
                printf("Sheet %d, front: Blank, %d\n", i, minPage++);
                maxPage--;
                if(maxPage > n)
                {
                    printf("Sheet %d, back : %d, Blank\n", i, minPage++);
                    maxPage--;
                }
                else
                    printf("Sheet %d, back : %d, %d\n", i, minPage++, maxPage--);
            }
            else{
                printf("Sheet %d, front: %d, %d\n", i, maxPage--, minPage++);
                printf("Sheet %d, back : %d, %d\n", i, minPage++, maxPage--);
            }


        }

    }


    return 0;
}
