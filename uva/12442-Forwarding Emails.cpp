/*
Author : Avijit Bhattacharjee
Date : 26/12/2017
Khulna Univesity , Khulna
Idea : Simple DFS on Tree+cycle graph . For each node we have stored the value it can visit in
can_deliver array . Then the first node which has maximum visit value is the solution .

Tricks : It will give TLE if DFS is not optimized . We can store a the recursive dfs values
and call dfs from main loop which is not yet calculated . Thats the optimization to ge AC .

Mistakes : I have initialized dfs_num vector in the for loop for dfs in main . Which caused
TLE 3-4 times .

*/

#include <bits/stdc++.h>


using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define DFS_WHITE -1
#define DFS_BLACK 1

vector<vii> AdjList;

vi dfs_num;
vi can_deliver;
int k ;

void printVector(vector<int>& vt, string st)
{
    cout << st ;
    for(vector<int>::iterator it=vt.begin(); it != vt.end(); ++it)
    {
        cout << " " << *it ;

    }
    cout << endl;

}


int dfs(int u){


    dfs_num[u] = DFS_BLACK;
    int total = 0;
    for(int j = 0; j < (int)AdjList[u].size(); j++)
    {
        ii v = AdjList[u][j];
        if(dfs_num[v.first] == DFS_WHITE)
        {
            total += 1 + dfs(v.first);
            //cout << total << endl;
        }
        dfs_num[u] = DFS_WHITE;

    }

    //cout << total << " hello" << endl;
    return can_deliver[u] = total;

    //cout << u << "can deliver" << can_deliver[u]++ << endl;
    //cout << u << endl;
}




int main()
{
    int T, N, u, v;
    freopen("in_12442.txt", "r", stdin);
    cin >> T;
    for(int i = 0; i < T; i++)
    {

        cin >> N;
        AdjList.assign(N+1, vii());
        can_deliver.assign(N+1, -1);
        for(int k = 0; k < N ; k++ )
        {
            cin >> u >> v;
            AdjList[u].push_back(ii(v,1));
        }

        int index, value = -1034234;
        dfs_num.assign(N+1, DFS_WHITE);
        for( k = 1; k <= N ; k++)
        {
            //dfs_num.assign(N+1, DFS_WHITE); if have put assingment here which lead to TLE
            if(can_deliver[k] == -1)
                dfs(k);
            //cout << "dfs for " << k << "done" << endl;
            //cout << k << " can deliver  " << can_deliver[k] << endl;
            if(can_deliver[k] > value)
            {
                index = k;
                value = can_deliver[k];
            }
            //printVector(can_deliver, "can deliver");
        }
        //sort(can_deliver.begin(),can_deliver.end());
        //cout << *can_deliver.begin() << *can_deliver.end()<< endl;
        cout << "Case " << i+1 << ": " << index << endl;
    }

    return 0;
}
