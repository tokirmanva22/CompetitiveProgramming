#include <bits/stdc++.h>

#define maxC 102

using namespace std;

int A[maxC], B[maxC];
int dp[maxC][maxC];
bool visited[maxC][maxC];

int N1, N2;

int calcLCS(int i, int j)
{
	if(i == N1  || j == N2)
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



int main()
{
	int T  = 1;
	while (1) {
		memset(dp,-1 , sizeof(dp));
		memset(visited, false , sizeof(visited[0][0]) * maxC * maxC);
		scanf("%d %d",&N1, &N2);
		if(N1 == 0 and N2 == 0)
			break;
		for(int i = 0; i < N1 ; i++)
		{
		    cin >> A[i];

		}
		for(int i = 0; i < N2; i++)
		{
        	    cin >> B[i];

		}
		if(N1 >= N2)
				printf("Twin Towers #%d\n",T++ );
		else
				printf("Twin Towers #%d\n", T++);

				printf("Number of Tiles : %d\n\n", calcLCS(0,0));

	}

	return 0;

}
