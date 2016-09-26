#include <bits/stdc++.h>

#define INF 10000005

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vii> AdjList;


void readGraph(int edges)
{
    int v1, v2;
    for(int k = 1; k <= edges; k++)
    {
        scanf("%d %d", &v1, &v2);
        //cin >> v1 >> v2;
        AdjList[v1].push_back(ii(v2, 1));
    }
}

bool bfs(int s)
{
    queue<int> q;
    q.push(s);
    vi color(205, INF);
    color[s] = 0;
    bool isBipartite = true;
    while(!q.empty() && isBipartite)
    {
        int u = q.front();
        q.pop();
        for(int j = 0; j < (int)AdjList[u].size() ; j++)
        {
            ii v = AdjList[u][j];
            if(color[v.first] == INF)
            {
                color[v.first] = 1 - color[u];
                q.push(v.first);
            }else if(color[v.first] == color[u])
            {
                isBipartite = false;
                return isBipartite;

            }

        }

    }
    return isBipartite;
}

int main()
{

    int node , edges;

    while(1)
    {
        cin >> node ;
        if(node == 0)
            break;
        cin >> edges;

        AdjList.assign(205, vii());
        readGraph(edges);
        if(bfs(0))
            cout << "BICOLORABLE." << endl;
        else
            cout << "NOT BICOLORABLE." << endl;

    }

    return 0;
}
