//implementation idea drilled from rafi-kamals github

#include <bits/stdc++.h>


using namespace std;

#define SIZE 27
#define FORBIDDEN -1

int X[] = {0, 0, 1, 0 , 0, -1};
int Y[] = {0, 1, 0, 0 , -1, 0};
int Z[] = {1, 0, 0, -1 , 0, 0};
string str1, str2, s1, s2, s3;
int n, a , b, c;
bool flag;



int push[SIZE][SIZE][SIZE] , visited[SIZE][SIZE][SIZE];


bool bfs(int T);

struct point{
	int x;
	int y;
	int z;

	point(){};
	point(int x, int y, int z){
		this->x = x;
		this->y = y;
		this->z = z;

	};
};


void read()
{
	int T;
	cin >> T;
	for(int i = 0; i < T ; i++)
	{
		cin >> str1 >> str2 >> n;
		memset(visited , 0 , sizeof visited);
        memset(push, 0, sizeof push);

		for(int j = 0 ; j < n ; j++)
		{
			cin >> s1 >> s2 >> s3;

			for(int k = 0 ; k < s1.size() ; k++)
				for(int l = 0 ; l < s2.size(); l++)
					for(int m = 0; m < s3.size(); m++)
					{
						visited[s1[k]-'a'][s2[l]-'a'][s3[m]-'a'] = FORBIDDEN;

					}

		}
		if(visited[str1[0]-'a'][str1[1]-'a'][str1[2]-'a'] == FORBIDDEN)
		{
			printf("Case %d: %d\n",i+1 , -1 );
			continue;
		}

		bfs(i);




	}


}


bool bfs(int T)
{
	push[str1[0]-'a'][str1[1]-'a'][str1[2]-'a'] = 0;

	queue<point> q;
	point p;
	q.push(point(str1[0]-'a',str1[1]-'a',str1[2]-'a'));

	flag = true;
	while(!q.empty() && flag)
	{
		p = q.front();

		q.pop();

		if(p.x == str2[0]-'a' && p.y == str2[1]-'a' && p.z == str2[2]-'a')
			{
				flag = false;
				break;
			}

		for(int m = 0 ; m < 6 ; m++)
		{

			a = (p.x+X[m]) % 26;
			b = (p.y+Y[m]) % 26;
			c = (p.z+Z[m]) % 26;

			if(a < 0)
				a += 26;
			if(b < 0)
				b += 26;
			if(c < 0)
				c += 26;

			if(visited[a][b][c] == 0)
			{
				visited[a][b][c] = 1;
				push[a][b][c] = push[p.x][p.y][p.z] + 1;
				q.push(point(a, b , c));
			}

		}

	}
	if(!flag)
		{
			printf("Case %d: %d\n",T+1 , push[p.x][p.y][p.z]);
		}
		else
		{
			printf("Case %d: %d\n",T+1 , -1 );
		}
	return flag;

}




int main()
{

	read();


	return 0;
}
