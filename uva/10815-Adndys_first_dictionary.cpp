#include <bits/stdc++.h>

using namespace std;

int main()
{
	set<string> dict;
	string text = "";
	string st = "";
	string sub = "";
	//int count = 0;
	while(getline(cin , st) )
	{

		text += st;
	}
	for(int i = 0 ; i < text.size() ; i++)
	{
		if(isalpha(text[i]))
		{
			sub += tolower(text[i]);
		}
		else
		{
			dict.insert(sub);
			sub = "";
		}

	}
	for(set<string>::iterator it = dict.begin(); it != dict.end() ; it++)
		cout << *it << endl;
	return 0;
}