#include <bits/stdc++.h>

using namespace std;

#define MAX 2505

vector<int> edge[MAX];
bool visited[MAX] ;
vector<int> path;
int level[MAX], levelFreq[MAX];
void bfs(int src)
{
    queue<int> q;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(levelFreq, 0, sizeof(levelFreq));
    path.clear();
    visited[src] = true;
    q.push(src);
    level[src] = 0;
    path.push_back(src);
    while(!q.empty())
    {
        int u = q.front();
        visited[u] = true;
        path.push_back(u);
        q.pop();

        for(int i = 0; i < edge[u].size() ; i++)
        {
            if(!visited[edge[u][i]])
            {
                q.push(edge[u][i]);
                level[edge[u][i]] = level[u] + 1;
            }
        }
    }
}

void input()
{
    int E, N,temp, T, src, maxSpread = -1234;
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
        bfs(src);
        for(int i = 0; i < E ; i++)
            cout << level[i] << endl;
        cout << "BFS path" << endl;
        for(int i = 0; i < path.size() ; i++)
            cout << path[i] << " ";
        for(int i = 0 ; i < E ; i++)
        {
            levelFreq[level[i]]++;
            //cout << levelFreq[level[i]] << endl;
            maxSpread = max(levelFreq[level[i]], maxSpread);
            //cout << maxSpread << levelFreq[level[i]] << endl;
        }
        /*
        for(int i = 0 ; i < E ; i++)
        {
            cout << levelFreq[level[i]] << endl;
        }
        cout << maxSpread << "hello almost done " << endl;
        */
        cout << maxSpread << endl;
    }
}

int main()
{
    input();

    return 0;
}
