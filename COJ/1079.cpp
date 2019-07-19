// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1079

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int t,n, memo[110][110], arr[110][110];
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> t;
    while(t--)
    {
        cin >> n;
        memset(memo,0,sizeof memo);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                cin >> arr[i][j];
                memo[i][j] = arr[i][j];
            }
        }
        for(int i = n-2; i>=0; i--)
        {
            for(int j = 0; j <= i; j++)
            {
                memo[i][j] += max(memo[i+1][j],memo[i+1][j+1]);
            }
        }
        cout << memo[0][0] << "\n";
    }
    return 0;
}
