// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=3286

#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <queue>
#include <set>
#define MOD 1000000007

using namespace std;
typedef long long ll;

struct UF {
    vector<int> p, sz;
    UF(int n) {
        sz.assign(n, 1);
        p.resize(n);
        for (int i = 0; i < n; ++i)
            p[i] = i;
    }
    int find(int i) {
        if (p[i] != i)
            p[i] = find(p[i]);
        return p[i];
    }
    void join(int i, int j) {
        int x = find(i), y = find(j);
        if (x == y) return;
        if (sz[x] < sz[y]) {
            p[y] = x;
            sz[x] += sz[y];
        } else {
            p[x] = y;
            sz[y] += sz[x];
        }
    }
};

ll nChoosek(ll n, ll k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;
    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n, t, m;
    scanf("%d", &t);
    while(t-- > 0)
    {
        scanf("%d %d", &n, &m);
        UF uf(n+1);
        for(int i = 0; i < m; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            uf.join(a, b);
        }
        ll cnt = 0;
        set<ll> s;
        for(int i = 1; i <= n; i++)
        {
            s.insert(uf.find(i));
        }
        cnt = s.size();
        printf("%lld\n", nChoosek(cnt, 2));
    }
    return 0;
}
