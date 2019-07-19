// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2344

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

typedef struct medal
{
	char name[66];
	int g;
	int s;
	int b;

}medal;

bool cmp(medal m1, medal m2)
{
	if(m1.g != m2.g)
	{
		if(m1.g > m2.g) return true;
		return false;
	}
	if(m1.s != m2.s)
	{
		if(m1.s > m2.s) return true;
		return false;
	}
	if(m1.b != m2.b)
	{
		if(m1.b > m2.b) return true;
		return false;
	}
	if(lexicographical_compare(m1.name, m1.name+strlen(m1.name), m2.name, m2.name+strlen(m2.name)))
		return true;
	return false;
}
int n;
int main()
{
	while(true)
	{
		medal input[30];
		n = 0;
		while(true)
		{
			cin >> input[n].name;
			if(input[n].name[0] == '@' || input[n].name[0] == '#')  break;
			cin >> input[n].g >> input[n].s >> input[n].b;
			n++;
		}
		sort(input, input+n, cmp);
		for(int i = 0; i < n; i++)
		{
			if(input[i].name[0] != '@' || input[n].name[0] != '#')
				cout << input[i].name << "\n";
		}
		if(input[n].name[0] != '#')
			cout << "@" << "\n";
		else break;
	}
}
