#include<cstdio>
#include<algorithm>
#include <bits/stdc++.h>

#define maxC 25

using namespace std;

int A[maxC], B[maxC];
int dp[maxC][maxC];
bool visited[maxC][maxC];

int n;

int calcLCS(int i, int j)
{
	if(i  == n  || j == n)
		return 0;
	if(dp[i][j] != -1)
		return dp[i][j];
//	if(visited[i][j]) return dp[i][j];


	int answer = 0;

	if(A[i] == B[j])
		answer = 1 + calcLCS(i+1, j+1);
	else
	{

	  int a1 = calcLCS(i+1, j);
		int a2 = calcLCS(i, j+1);
		answer = max(a1, a2);
	}

	//visited[i][j] = true;
	dp[i][j] = answer;

	return dp[i][j];

}

int main(){
    int x;

    scanf("%d\n",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        A[x-1]=i;
    }

    while(scanf("%d",&x)==1){
        B[x-1]=0;
        for(int i=1;i<n;i++){
            scanf("%d",&x);
            B[x-1]=i;
        }

        memset(dp,-1 , sizeof(dp));
    	memset(visited, false , sizeof(visited[0][0]) * maxC * maxC);


        printf("%d\n",calcLCS(0,0));
    }

    return 0;
}
