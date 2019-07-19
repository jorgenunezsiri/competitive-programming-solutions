// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2975

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;
int main()
{
    ll n, p;
    while(cin >> n)
    {
        if(n == 0) break;
        cin >> p;
        vector<vector<ll> > v(1000, vector<ll>());
        int cnt = 0;
        for(int i = 1, j = n; cnt < n/4; i+=2, j-=2)
        {
            v[cnt].push_back(i);

            v[cnt].push_back(i+1);

            v[cnt].push_back(j);

            v[cnt].push_back(j-1);
            cnt++;
        }
        int r = 0;
        vector<ll> res;
        for(int i = 0; i < cnt; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                if(v[i][j] == p) r = i;
            }
        }
        for(int i = 0; i < v[r].size(); i++)
        {
            res.push_back(v[r][i]);
        }

        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++){
            if(res[i] != p)
            {
                cout << res[i];
                if(i != res.size()-1) cout << " ";
                if(i == res.size()-1) cout << "\n";
            }
        }
    }

    return 0;
}
