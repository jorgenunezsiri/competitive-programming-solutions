// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/431/C

#include <iostream>
#include <cstring>

using namespace std;
typedef long long ll;
ll memo[110][2];

int n1, k, d;
int dp(int n, bool flag){
    if(n > n1) return 0;
    if(n == n1 && flag) return 1;
    if(memo[n][flag] != -1) return memo[n][flag];
    ll ans = 0;
    for(int i = 1; i <= k; i++) {
        ans += dp(n+i, flag || i >= d);
        ans %= (1000000007);
    }
    return memo[n][flag] = ans;
}
int main()
{
    cin >> n1 >> k >> d;
    memset(memo, -1, sizeof memo);
    ll ans = dp(0, false);
    cout << ans << endl;
    return 0;
}
