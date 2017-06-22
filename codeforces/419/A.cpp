#include <bits/stdc++.h>

using namespace std;



int main()
{
	int h, m, i = 0;

	scanf("%d:%d", &h, &m);
	for(;( (h%10)*10+h/10 != m ); i++)
			{
				if(m == 59)
				{
					if(h == 23)
						h = 0;
					else
						h++;
				       	m = 0;
				}		
				else
					m++;
			}
			cout << i << endl;

	return 0;
}

