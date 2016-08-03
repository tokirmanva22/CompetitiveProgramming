#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <vector>

 
using namespace std;
 

 
int main () {
    
	int T;
	cin >> T;

	for(int i = 0 ; i < T ; i++)
	{
		string s;
		vector<string> v;
		cin >> s;
		// sort(s.begin(), s.end());
		do{
			v.push_back(s);
		}while(next_permutation(s.begin(), s.end()));
		sort(v.begin(), v.end());
		for(int i = 0 ; i < v.size() ; i++)
			cout << v[i] << endl;

	}

	return 0;
}
