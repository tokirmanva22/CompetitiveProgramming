	#include <bits/stdc++.h>

using namespace std;

#define MAX 2505
#define INF 5000

vector<int> edge[MAX];
int level[MAX];
int maxsize =  0, firstday = 0;
void bfs(int src)
{
    queue<int> q;
    //memset(level, INF, sizeof(level));
	for(int i = 0 ; i < MAX ; i++)
		level[i] = INF;
    
    q.push(src);
    level[src] = 0;
   
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < edge[u].size() ; i++)
        {
            int v = edge[u][i];
            if(level[v] == INF)
            {
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }
}

void input()
{
    int E, N,temp, T, src;
    cin >> E;
    for(int j = 0; j < E ; j++)
    {
        cin >> N;
        for(int k = 0 ;  k < N ; k++)
        {
            cin >> temp;
            edge[j].push_back(temp);
        }
    }
    cin >> T;
    for(int j = 0 ; j < T ; j++)
    {
        cin >> src ;
		if(edge[src].size() > 0){
			bfs(src);
			maxsize = 0, firstday = -1;
			sort(level, level + E);
			int len = 1;
			for(int s = 1  ; s <= E ; s++)
			{
				if(level[s-1] == level[s]) len++;
				else
				{
					if(level[s - 1] != INF && len > maxsize)
						{
							maxsize = len;
							firstday = level[s - 1];							
						}
						len = 1;
				}

			
			}
			 if (firstday==0) firstday++;
         		printf("%d %d\n", maxsize, firstday);
		}
		else{
			puts("0");
		}	
        	
        
        

    }
}

int main()
{
    input();

    return 0;
}
