// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=3323

#include <iostream>
#include <algorithm>
#include <cstdio>
#define MAXN 100000010
using namespace std;
typedef long long ll;

ll cuadrados[31622790];
int main()
{
    ios_base::sync_with_stdio(false);
    ll a, b, res = 0;
    // 31622780 is aprox the sqrt of MAXN
    for(ll i = 0; i <= 31622780; i++) {
        cuadrados[i] = 1LL*i*i;
    }
    while(scanf("%lld %lld", &a, &b)) {
        if(a == 0 && b == 0) break;
        res = 0;
        res += b-a+1;
        ll p = lower_bound(cuadrados, cuadrados+31622780, b)-cuadrados;
        if(cuadrados[p] > b) p--;
        ll q = lower_bound(cuadrados, cuadrados+31622780, a)-cuadrados;
        res -= p-q+1;
        printf("%lld\n", res);
    }
    return 0;
}
