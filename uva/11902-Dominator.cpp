#include <bits/stdc++.h>

using  namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;



int V;
vector<vii> AdjList;
bitset<105> initVisited, curVisited;
bool first;
void graph_input()
{
    int  choice;
    cin >> V;
    AdjList.assign(V, vii());
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        cin >> choice;
        if(choice == 1)
        {
          AdjList[i].push_back(ii(j, 1));
        }

      }
    }

}

void dfs(int u, int del)
{
    bitset<105> *visited;

    if(first)
      visited = &initVisited;
    else
      visited = &curVisited;

      visited->set(u);
      if(u == del)
      return;
      for(int i = 0; i < (int)AdjList[u].size() ; i++)
      {
        pair<int,int> v = AdjList[u][i];
        if(!visited->test(v.first))
        {
          dfs(v.first, del);
        }
      }


}

 int main(int argc, char const *argv[]) {
   int tc, count = 1;
   cin >> tc;

   while(tc--)
   {
     graph_input();
     first = true;
     for(int k = 0; k < V ; k++)
         initVisited.reset(k);
     dfs(0, V);

     first = false;
     printf("Case %d:\n", count++);
     for(int l = 0; l < V; l++)
     {
       for(int k = 0; k < V ; k++)
           curVisited.reset(k);
       dfs(0, l);
       printf("+" );

       for(int j = 0; j < 2 * V - 1 ; j++)
           printf("-");
       printf("+\n|");
       for(int j = 0; j < V ; j++)
            if(initVisited.test(j) && ((l == j) || (!curVisited.test(j))))
                printf("Y|");
            else
                printf("N|");
        printf("\n");
     }
        printf("+" );

                for(int j = 0; j < 2 * V - 1 ; j++)
                    printf("-" );
                printf("+\n");


   }

    int c;
    cin >> c;
  return 0;
}
// code to learn from
/*
#include <cstdio>
#include <bitset>
#include <vector>
#include <cstring>
using namespace std;

typedef vector<int> vi;

int V, tc, count = 1;
vector<vi> AdjList;
bitset<105> initVisited, curVisited;
bool first;

void dfs(int u, int del) {
	bitset<105> *visited;
	if (first)
		visited = &initVisited;
	else
		visited = &curVisited;

	visited->set(u);
	if (u == del)
		return;

	for (int i = 0; i < (int) AdjList[u].size(); i++) {
		int v = AdjList[u][i];
		if (!visited->test(v))
			dfs(v, del);
	}
}

int main() {
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &V);
		AdjList.assign(V, vi());
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				int e;
				scanf("%d", &e);
				if (e)
					AdjList[i].push_back(j);
			}
		}

		first = true;
		for (int i = 0; i < V; i++)
			initVisited.reset(i);
		dfs(0, V);
		first = false;

		printf("Case %d:", count++);
		for (int i = 0; i < V; i++) {
			for (int k = 0; k < V; k++)
				curVisited.reset(k);
			dfs(0, i);

			printf("\n+");
			for (int j = 0; j < V * 2 - 1; j++) {
				printf("-");
			}
			printf("+\n|");
			for (int j = 0; j < V; j++) {
				if (initVisited.test(j) && (i == j || !curVisited.test(j)))
					printf("Y");
				else
					printf("N");
				printf("|");
			}
		}
		printf("\n+");
		for (int j = 0; j < V * 2 - 1; j++) {
			printf("-");
		}
		printf("+\n");
	}

	return 0;
}
*/
