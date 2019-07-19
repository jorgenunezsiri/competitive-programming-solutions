// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2965

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

typedef long long ll;
#define N ((ll)(1e6))

vector<ll> cuadrados;
int main()
{
	int t,k;
	for(ll i = 1; i <= N; i++)
	{
		ll temp = i*i;
		cuadrados.push_back(temp);
	}
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> k;
		ll valor = 0;
		for(ll j = 2; j <= N; j+=2)
		{
			ll val1 = (j+k);
			ll val2 = ((j/2)+k);
			if(binary_search(cuadrados.begin(),cuadrados.end(),val1))
			{
				if(binary_search(cuadrados.begin(),cuadrados.end(),val2))
				{
					valor = j;
					break;
				}
			}
		}
		cout << "Case " << i+1 << ": " << valor << "\n";
	}

	return 0;
}
