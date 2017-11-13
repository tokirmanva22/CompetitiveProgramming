#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1000000000

int V , E , s , u, v, w;
int ara[105][105];

vector<vii> AdjList;

int dijkstra();

void read()
{

	//freopen("1019.txt", "r", stdin);
	int T;
	cin >> T;

	for(int f = 0 ; f < T ; f++)
	{

		cin >> V >> E;
		memset(ara, -1 , sizeof ara);
		AdjList.assign(V+1, vii());

		for(int l = 0; l < E ; l++)
		{
			cin >> u >> v >> w;

			if(ara[u][v] == -1)
			{
				ara[u][v] = w;
				ara[v][u] = w;
			}else if(ara[u][v] > w)
			{
				ara[u][v] = w;
				ara[v][u] = w;
			}

		}

		for(int j = 0; j <= V; j++)
		    for(int k = 0; k <= V; k++)
		    {

				if(ara[j][k] != -1)
				{
					AdjList[j].push_back(make_pair(k, ara[j][k]));
					AdjList[k].push_back(make_pair(j, ara[k][j]));
				}

		    }

		if(dijkstra() == INF)
            printf("Case %d: Impossible\n", f+1 );
        else
            printf("Case %d: %d\n", f+1, dijkstra() );
	}

}

int dijkstra()
{

	vi dist(V+1, INF);
	dist[1] = 0;

	priority_queue<ii, vector<ii> , greater<ii> > pq;
	pq.push(ii(0, 1));

	while(!pq.empty())
	{

		ii front = pq.top();
		pq.pop();

		int d = front.first, u = front.second;
		if(d > dist[u])
			continue;
		for(int j = 0; j < (int)AdjList[u].size() ; j++)
		{
			ii v = AdjList[u][j];

			if(dist[u] + v.second < dist[v.first])
			{
				dist[v.first] = dist[u] + v.second;

				pq.push(ii(dist[v.first], v.first));

			}
		}
	}

	return dist[V];


}

int main()
{

	read();

	return 0;
}
