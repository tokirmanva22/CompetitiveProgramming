#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
int visited[100];
int dist[100];
int p[100];
//s is starting
//t is destination
//n is number of vertex

void bfs(int s, int n)
{
  for(int i  = 0; i < n ; i++)  visited[i] = 0;

  queen<int> Q;
  Q.push(s);
  visited[s] = 1;
  dist[s] = 0;
  p[s] = s;

  while(!Q.empty())
  {
    int u = Q.front();
    Q.pop();
    for(int i = 0; i < adj[u].size() ; i++)
    {
      int v = adj[u][i] ;
      visited[v] = 1;
      dist[v] = dist[u] + 1;
      p[v] = u;
      Q.push(v);
    }

  }
  if(visited[t] == 0)
  {
    cout << "No path from s to t" << endl;
    return ;
  }
  vector<int> path;
  path.push_back(t);
  int now = t;
  while(now != s)
  {
    now = p[now];
    path.push_back(now);
  }

}

 int main(int argc, char const *argv[]) {
  /* code */
  cout << "hellow world" << endl;
  return 0;
}
