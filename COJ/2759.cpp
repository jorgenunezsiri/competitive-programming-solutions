// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2759

#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

#define mp make_pair
#define pb push_back

typedef long long ll;
typedef pair<int,int> pii;
#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair

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

vector<pii> entrada;
vector<pair<ll, pii> > arbol;
ll a, b, n, c;
int main()
{
    cin >> n >> c;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        pii temp = mp(a, b);
        entrada.push_back(temp);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            ll costo = pow((entrada[i].first-entrada[j].first), 2.0)+
                       pow((entrada[i].second-entrada[j].second), 2.0);
            if(costo >= c)
            {
                arbol.push_back(mp(costo, mp(i, j)));
            }
        }
    }
    sort(arbol.begin(), arbol.end());
    UF uf(n+1);
    ll ans = 0;
    for(int i = 0; i < arbol.size(); i++)
    {
        if(uf.find(arbol[i].second.first) != uf.find(arbol[i].second.second))
        {
            uf.join(arbol[i].second.first, arbol[i].second.second);
            ans += arbol[i].first;
        }
    }
    set<ll> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(uf.find(i));
    }
    if(s.size() > 1) cout << -1 << "\n";
    else cout << ans << "\n";

    return 0;
}
