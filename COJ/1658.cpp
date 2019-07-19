// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1658

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int temp, dp[1010],t,n;
int main()
{
	ios_base::sync_with_stdio(false);
	cin >> t;
	while(t--)
	{
		memset(dp,0,sizeof dp);
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			v.push_back(temp);
			dp[i] = 1;
		}
		int maxi = 0;
		if(n == 1) {cout << "1" << "\n";continue;}
		for(int i = 1; i < n; i++)
		{
			for(int j = 0; j < i; j++)
			{
				if(v[i] > v[j] && dp[i] < dp[j]+1)
				{
					dp[i] = dp[j]+1;
					maxi = max(maxi,dp[i]);
				}
			}
		}
		cout << maxi << "\n";
	}

	return 0;
}
