#include <bits/stdc++.h>

#define VISITED 1
#define UNVISITED 0

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vii> AdjList;

vi dfs_num;
vi ts;

void dfs2(int u)
{
    dfs_num[u] = VISITED;
    for(int j = 0 ; j < (int)AdjList[u].size(); j++)
    {
        ii v = AdjList[u][j];
        if(dfs_num[v.first] == UNVISITED)
            dfs2(v.first);
    }
    ts.push_back(u);
}

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

int main()
{
    int  vertics, edges, l;
    //cin >> n >> m;
    ts.clear();
    while(scanf("%d %d", &vertics, &edges))
    {
        if(!vertics && !edges)
            break;
        dfs_num.assign(105, UNVISITED);
        AdjList.assign(105, vii());
        readGraph(edges);
        //ts.clear();
        for(int i = 1; i <= vertics; i++)
        {
            if(dfs_num[i] == UNVISITED)
                dfs2(i);
        }
        //reverse(ts.begin(), ts.end());
        for( l = (int)ts.size() - 1; l > 0; l--)
            {
                printf("%d ", ts[l]);
            }
        printf("%d\n", ts[l]);
        ts.clear();
        }

    return 0;
}
