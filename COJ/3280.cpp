// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=3280

#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long ll;

vector<ll> v;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n, sum = 0;
    for(int i = 1; sum <= (ll)(1e8)+10000; i++)
    {
        v.push_back( sum );
        sum+=i;
    }
    while(scanf("%lld", &n))
    {
        if(n == 0) break;
        vector<ll>::iterator up = upper_bound(v.begin(), v.end(),n);
        ll pos = up - v.begin();
        printf("%lld %lld\n", (pos*(pos+1))/2 - n, pos);
    }
    return 0;
}
