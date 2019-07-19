// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/414/B

#include <iostream>
#include <cstring>
#define MOD ((int)(1e9+7))

typedef long long ll;

using namespace std;
int n,k;
ll ans;

int memo[2020][2020];

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        memo[1][i] = 1;
    }
    for(int i = 1; i < k; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int f = 1; j*f <= n; f++)
            {
                memo[i+1][j] +=  memo[i][j*f];
                if(memo[i+1][j] >= MOD) memo[i+1][j] -= MOD;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        ans += memo[k][i];
        if(ans >= MOD) ans -= MOD;
    }
    cout << ans << "\n";

    return 0;
}
