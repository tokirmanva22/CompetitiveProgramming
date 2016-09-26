#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
 
using namespace std;

	 map<string , int> id;                                           


// int totalFriend(string a){
// 	string w = a;
// 	int tF = 0;
// 	while(id[w])
// 	{
// 		w = id[w];
// 		tF++;
// 	}
// 	return tF;
// }

// string parent(string a){
// 	string w = a;
	
// 	while(id[w])
// 	{
// 		w = id[w];
		
// 	}
// 	return w;
// }

// void union1(string a, string b)
// {

// 	string root_a = parent(a);
// 	string root_b = parent(b);
// 	id[root_a] = root_b;
// }


 

 
int main () {

	
	int T;
	cin >> T;
	while(T--)
	{
		int N;
		string s1, s2;
		cin >> N;
		while(N--)
		{
			cin >> s1 >> s2;
			id.clear();
			union1(s1, s2);
			if(parent(s1) != parent(s2))
			cout << totalFriend(s1) + totalFriend(s2) << endl;
			else
				cout << totalFriend(s1) << endl;

		}		
	}

	return 0;
}
