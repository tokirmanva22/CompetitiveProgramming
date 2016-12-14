#include <bits/stdc++.h>

using namespace std;

string str[100];


string i_to_s(int n)
{
    string s;
    ostringstream convert;
    convert << n;
    s = convert.str();

    return s;
}

void password(int r,string rule,	const vector<string>& dict )
{
    //cout << rule[0].size() << rule[0][0] << endl;
	if(r == rule.size() )
	{
		for(int j = 0; j < r ; j++)
		{
			cout << str[j];
		}
		cout << endl;
		return;
	}
	else if(rule[r] == '0')
	{
		for(int i = 0; i < 10 ; i++)
		{
			str[r] = i_to_s(i);
			password(r+1 , rule, dict);
		}
	}else if(rule[r] == '#')
	{
		for(int i = 0 ; i < dict.size() ; i++)
		{
			str[r] = dict[i];
			password(r+1 , rule, dict);
		}
	}



}


int main()
{
	vector<string> rule;
	vector<string> dict;
	string  temp;
	int n, m;
    while(true)
    {
        if(scanf("%d", &n) == EOF)
        {
            break;
        }
        dict.clear();
        for(int i = 0; i < n ; i++)
        {
            cin >> temp;
            dict.push_back(temp);
        }
        scanf("%d", &m);
        rule.clear();
        for(int i = 0; i < m ; i++)
        {
            cin >> temp;

            rule.push_back(temp);
            //cout << "--" << endl;
            //password(0, rule, dict);

        }
        cout << "--" << endl;
        for(int i = 0; i < rule.size() ; i++)
        {

            password(0, rule[i], dict);

        }

    }

	//password(0, rule, dict);
	//cout << rule[0].size() << rule[0][0] << endl;
	//cout << i_to_s(5) <<endl;

	return 0;
}
