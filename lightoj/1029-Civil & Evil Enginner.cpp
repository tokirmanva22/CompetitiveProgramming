#include <bits/stdc++.h>


using namespace std;
const int MAX = 105;
typedef pair<long long, int> PII;
bool marked[MAX];
bool marked1[MAX];
vector <PII> adj[MAX];
vector <PII> adj1[MAX];
int ara[105][105];
int ara1[105][105];
long long prim(int x)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked[x] == true)
            continue;
        minimumCost += p.first;
        marked[x] = true;

	//cout << "marked for min prim " << x << endl;

        for(int i = 0;i < adj[x].size();++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minimumCost;
}

long long prim2(int x)
{
    priority_queue<PII, vector<PII>, less<PII> > Q;
    int y;
    long long maximumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {
        // Select the edge with maximum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked1[x] == true)
            continue;
        maximumCost += p.first;
        marked1[x] = true;
	//cout << "marked for max prim " << x << endl;
        for(int i = 0;i < adj1[x].size();++i)
        {
            y = adj1[x][i].second;
            if(marked1[y] == false)
                Q.push(adj1[x][i]);
        }
    }
    return maximumCost;
}
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t ; i++)
	{

    int nodes, edges, x, y;
    long long weight, minimumCost, maximumCost;
    memset(ara, -1 , sizeof ara);
    memset(ara1, -1, sizeof ara1);
    memset(marked, 0 , sizeof marked);
    memset(marked1, 0, sizeof marked1);
    for(int d = 0 ;  d < 105 ; d++)
    {
	adj[d].clear();
	adj1[d].clear();
    }    
    cin >> nodes ;
    while(1)
    {
        cin >> x >> y >> weight;
	if(x == 0 and y == 0 and weight == 0)
		break;
	if(ara[x][y] == -1)
	{
		ara[x][y] = weight;
		ara[y][x] = weight;
	}else if(ara[x][y] > weight)
	{
		ara[x][y] = weight;
		ara[y][x] = weight;
	}

	if(ara1[x][y] == -1)
	{
		ara1[x][y] = weight;
		ara1[y][x] = weight;
	}else if(ara1[x][y] < weight)
	{
		ara1[x][y] = weight;
		ara1[y][x] = weight;
	}

    }
    for(int j = 0; j <= nodes; j++)
	    for(int k = 0; k <= nodes; k++)
	    {
		//cout << endl;
		//cout << " " << j << " " << k << " == " << ara[j][k];
		if(ara[j][k] != -1)
		{
		adj[j].push_back(make_pair(ara[j][k], k));
		adj[k].push_back(make_pair(ara[k][j], j));
		}
		if(ara1[j][k] != -1)
		{
		adj1[j].push_back(make_pair(ara1[j][k], k));
		adj1[k].push_back(make_pair(ara1[k][j], j));
		}
	    }
    // Selecting 1 as the starting node
    minimumCost = prim(0);
    maximumCost = prim2(0);
    /*for(int f = 0; f <= nodes; f++)
	    for(int s = 0; adj[f].size() ; s++)
	    {
		cout<< f << " " << adj[f][s].second << endl;
	    }i
	    */
    //cout << minimumCost << endl;
    //cout << maximumCost << endl;
    if( (minimumCost+maximumCost)%2 == 0 )
	    printf("Case %d: %d\n",i+1, (minimumCost+maximumCost)/2); 
    else
	    printf("Case %d: %d/2\n", i+1, (minimumCost+maximumCost));
	}
    return 0;
}

