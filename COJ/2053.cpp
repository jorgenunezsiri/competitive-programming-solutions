// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2053

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <sstream>
#include <map>
#include <queue>
#include <functional>
#include <cstdlib>
#include <cctype>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair

int n, k;
ll t[10010];
int main()
{
	for(int a = 1; a <= 10000; a++)
	{
		k = 0;
		for(int b = 1; b <= a; b++)
		{
			if((a*b) > 10000) break;
			for(int c = 0; c <= b; c++)
			{
				if((a*b)+(a*c)+(b*c) <= 10000) t[(a*b)+(a*c)+(b*c)]++;
			}
		}
	}
	while(true)
	{
		cin >> n;
		if(n == (-1)) break;
		cout << t[n] << "\n";
	}
	return 0;
}
