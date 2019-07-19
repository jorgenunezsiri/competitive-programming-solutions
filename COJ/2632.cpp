// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2632

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int ent[110][110];
int ent2[110][110];
int memo[110][110][110];
int n;

int dp(int i, int j, int k)
{
    if(i > n || j > n) return 0;
    if(memo[i][j][k] != -1) return memo[i][j][k];
    memo[i][j][0] = ent[i][j] + max(dp(i+1,j,0),dp(i+1,j+1,0));
    memo[i][j][1] = ent2[i][j] + max(dp(i+1,j,1),dp(i+1,j+1,1));
    return memo[i][j][k];
}

int main()
{
    memset(memo,-1,sizeof memo);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> ent[i][j];
            ent2[i][j] = ent[i][j]*ent[i][j];
        }
    }
    dp(1,1,0);
    int r2 = memo[1][1][1], r = memo[1][1][0];
    int r2c = r2%26, rc = r%26;

    cout <<  r2 << " " << r << "\n";
    cout << (char)(r2c+'a') << (char)(rc+'a') << "\n";

    return 0;
}
