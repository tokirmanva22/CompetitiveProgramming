#include <bits/stdc++.h>

#define maxC 2002

using namespace std;

char A[maxC], B[maxC];
int dp[maxC][maxC];
bool visited[maxC][maxC];
int lenA, lenB;

string ans;


int calcLCS(int i, int j)
{
	if(A[i] == '\0' and B[j] == 0 )
	       return 0;
	if(A[i] == '\0')
		return abs(j -  lenB);
	if(B[j] == '\0')
		return abs(i - lenA);

	if(dp[i][j] != -1)
		return dp[i][j];
//	if(visited[i][j]) return dp[i][j];


	int answer = 0;

	if(A[i] == B[j])
		answer =  calcLCS(i+1, j+1);
	else
	{

	  int insert = calcLCS(i, j+1);
	  int del = calcLCS(i+1, j);
	  int replace = calcLCS(i+1, j+1);
		answer = min(replace, min(insert, del));
		answer++;
	}

	//visited[i][j] = true;
	dp[i][j] = answer;

	return dp[i][j];

}




int main()
{
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    memset(dp,-1 , sizeof(dp));
    memset(visited, false , sizeof(visited[0][0]) * maxC * maxC);
  	scanf("%s %s", A, B);
  	lenA = strlen(A);
  	lenB = strlen(B);
//    int lcs = calcLCS(0, 0);
//  	if(lenA >= lenB)
//          cout <<  lenA - lcs << endl;
//    else
//          cout <<  lenB - lcs << endl;
	cout << calcLCS(0, 0) << endl;

  }
	return 0;

}
