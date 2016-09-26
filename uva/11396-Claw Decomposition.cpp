#include <bits/stdc++.h>

#define INF 10000005

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vii> AdjList;
bool isBipartite;

void readGraph()
{
    int v1, v2;
    for(int k = 1; ; k++)
    {
        scanf("%d %d", &v1, &v2);
        if(!v1 && !v2)
            break;
        //cin >> v1 >> v2;
        AdjList[v1].push_back(ii(v2, 1));
        AdjList[v2].push_back(ii(v1,1));
    }
}

bool bfs(int s)
{
    queue<int> q;
    q.push(s);
    vi color(305, INF);
    color[s] = 0;
    isBipartite = true;
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
        //cin >> edges;
        AdjList.assign(305, vii());
        readGraph();
        if(bfs(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        AdjList.clear();
    }

    return 0;
}

