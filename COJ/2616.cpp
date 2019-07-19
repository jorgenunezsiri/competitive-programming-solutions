// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2616

#include <iostream>
#include <vector>
#include <cstring>
#define Min(a,b) (a < b ? a : b)
#define MAXN 100010
using namespace std;

vector<int> v;

int memo[MAXN];
int n,c;
int main()
{
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	for(int i = 0; i < MAXN; i++)
	{
		memo[i] = (int)(2*1e9);
	}
	memo[0] = 0;
	memo[1] = 1;
	for(int i = 0; i < v.size(); i++)
	{
		memo[v[i]] = 1;
	}
	for(int i = 0; i < v.size(); i++)
	{
		for(int j = v[i]; j < MAXN; j++)
		{
			if(v[i] <= j) memo[j] = Min(memo[j], 1+memo[j - v[i]]);
		}
	}
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> c;
		cout << "Case " << i+1 << ": " << memo[c] << "\n";
	}

	return 0;
}
