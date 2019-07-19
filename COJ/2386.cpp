// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2386

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int n;
long long dp[1010][1010];

vector<int> vec;

long long rec(int indi,int indf,bool turno)
{
    if(indi > indf)
        return 0;
    if(dp[indi][indf] != -1)
        return dp[indi][indf];
    if(turno)
        return dp[indi][indf] = max(rec(indi+1,indf, false)+vec[indi],rec(indi, indf-1, false)+vec[indf]);
    else
        return dp[indi][indf] = min(rec(indi+1,indf,true),rec(indi,indf-1,true));
}

int main()
{
    memset(dp,-1,sizeof(dp));
    long long temp;
    int coun;
    cin >> coun;
    while(coun-- != 0)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    long long mayor;
    mayor = rec(0,vec.size()-1,true);
    cout << mayor << endl;

    return 0;
}
