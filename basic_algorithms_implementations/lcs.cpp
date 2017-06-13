#include <bits/stdc++.h>

#define maxC 1000 

using namespace std;

char A[maxC], B[maxC];
int dp[maxC][maxC];
bool visited[maxC][maxC];
int lenA, lenB;
int a1, a2;
string ans;


int calcLCS(int i, int j)
{
	if(A[i] == '\0' || B[j] == '\0')
		return 0;
	
	if(visited[i][j]) return dp[i][j];


	int answer = 0;

	if(A[i] == B[j])
		answer = 1 + calcLCS(i+1, j+1);
	else
	{
		
		a1 = calcLCS(i+1, j);
		a2 = calcLCS(i, j+1);

		answer = max(a1, a2);
	}

	visited[i][j] = true;
	dp[i][j] = answer;

	return dp[i][j];

}

void printLCS(int i , int j)
{
	if(A[i] == '\0' || B[j] == '\0')
	{	
	
		cout << ans << endl;
		return;

	}	

	if(A[i] == B[j] )
	{
	
		ans += A[i];
		printLCS(i+1 , j+1);
	}else
	{
		if(dp[i+1][j] > dp[i][j+1] )
			printLCS(i+1, j);
		else
			printLCS(i, j+1);
	
	}


}
void printallLCS(int i , int j)
{
	if(A[i] == '\0' || B[j] == '\0')
	{	
	
		cout << ans << endl;
		return;

	}	

	if(A[i] == B[j] )
	{
	
		ans += A[i];
		printallLCS(i+1 , j+1);
		ans.erase(ans.end()-1);
	
	}else
	{
		if(dp[i+1][j] > dp[i][j+1] )
			printallLCS(i+1, j);
		else if(dp[i+1][j] < dp[i][j+1] )
			printallLCS(i, j+1);
		else
		{
			printallLCS(i+1, j);
			printallLCS(i, j+1);
		
		}	
	}


}


int main()
{

	memset(dp, 0, sizeof(dp[0][0]) * maxC * maxC );
	memset(visited, false , sizeof(visited[0][0]) * maxC * maxC);
	scanf("%s%s", A, B);	
	lenA = strlen(A);
	lenB = strlen(B);
	cout << calcLCS(0, 0) << endl ;
	printallLCS(0, 0);
	return 0;

}
