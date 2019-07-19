// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/MSE06H/

#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
#include <cstring>
#define MAX 1010

using namespace std;
typedef long long ll;

ll T[MAX+1];

ll read(int i)
{
	ll sum = 0;
	while(i > 0)
	{
		sum += T[i];
		i -= (i & (-i));
	}
	return sum;
}

void update(int i, int inc)
{
	while(i <= MAX)
	{
		T[i] += inc;
		i += (i & (-i));
	}
}

int t, m, n, k;

int main()
{
	ios_base::sync_with_stdio(false);
	cin >> t;
	for(int j = 0; j < t; j++)
	{
		vector<pair<int, int> > a;
		memset(T, 0, sizeof(T));
		cin >> n >> m >> k;
		int o, p;
		for(int i = 0; i < k; ++i)
		{
			cin >> o >> p;
			a.push_back(make_pair(o,p));
		}
		sort(a.begin(), a.end());
		ll suma = 0;
		for(int i = 0; i < k; ++i)
		{
			update(a[i].second, 1);
			suma += (read(m) - read(a[i].second));
		}
		printf("Test case %d: %lld\n", j+1, suma);
	}
	return 0;
}
