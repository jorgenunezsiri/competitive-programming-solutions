// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2539

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>

using namespace std;

int dp[505][505];

vector<int> vec;
vector<int> sum;

int rec(int i,int j)
{
    if(i >= j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];

    // dp(i,j) = min(dp(i,k)+dp(k+1,j)+max(SUM(i,k),SUM(k+1,j)));
    // For all K where i <= k <= j;

    int minimo = 2000000000;
    for(int k = i; k<=j; k++)
    {
        dp[i][j] = (rec(i,k)+rec(k+1,j)+ max(sum[k] - (i>0 ? sum[i-1] : 0),sum[j]-sum[k]));
        if (dp[i][j] < minimo)
            minimo = dp[i][j];
    }

    return dp[i][j] = minimo;
}

int main() {
    int n;
    cin >> n;

    memset(dp,-1,sizeof(dp));
    int temp;
    while(n-- > 0)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    sum.push_back(vec[0]);
    for(int i = 1;i<vec.size();i++)
        sum.push_back(sum[i-1]+vec[i]);

    int n2 = rec(0,vec.size()-1);
    cout << n2;
    return 0;
}
