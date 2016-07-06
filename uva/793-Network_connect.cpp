#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
 
using namespace std;

	int id[100000000]; 

void initialize(int n){
	for(int y = 0 ; y <= n ; y++)
	{
		id[y] = y;
	}
}

int parent(int a){
	int w = a;
	while(id[w] != w)
	{
		w = id[w];
	}
	return w;
}

void union1(int a, int b)
{

	int root_a = parent(a);
	int root_b = parent(b);
	id[root_a] = root_b;
}


 

 
int main () {

	int tc;
	cin >> tc;

	while(tc--)
	{
		int yes = 0, no = 0, c1, c2,n;
		char q,line[1000];
		
		scanf("%d\n\n", &n);
		initialize(n);
		while (true) {
			//gets(line);
			cin.getline( line, 1000 );
			if (strcmp(line, "") == 0 || feof(stdin)) break;
			sscanf(line, "%c %d %d", &q, &c1, &c2);
			
			if (q == 'c') {
				union1(c1, c2);
			} else if (q == 'q') {
				if (parent(c1) == parent(c2))
					yes++;
				else
					no++;
			}
		}

		printf("%d,%d\n", yes , no );
		
		if(tc)
			cout << endl;

	}
    
	

	return 0;
}
