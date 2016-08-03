#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <queue>
 
using namespace std;
 

 
int main () {

	int N, a, a1, a2, addSum = 0,  sum = 0;
    
	while(1)
	{
		
		cin >> N;
		if(N == 0)
			break;

		priority_queue<int, vector<int>, greater<int> > q;

		for(int i = 0;  i < N ; i++)
		{
			cin >> a;
			q.push(a);
		}
		while(--N)
		{
			a1 = q.top();
			q.pop();
			a2 = q.top();
			q.pop();
			sum = a1 + a2;
			addSum += sum;
			q.push(sum);
		}
		cout << addSum << endl;
		addSum = 0, sum = 0;
	}

	return 0;
}
