// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/FASTFLOW/

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
typedef long long ll;
const int maxnodes = 5010;

ll nodes = maxnodes, src, dest;
ll dist[maxnodes], q[maxnodes], work[maxnodes];

struct Edge {
    ll to, rev;
    ll f, cap;
};

vector<Edge> g[maxnodes];

void addEdge(ll s, ll t, ll cap){
    Edge a = {t, g[t].size(), 0, cap};
    Edge b = {s, g[s].size(), 0, cap};
    g[s].push_back(a);
    g[t].push_back(b);
}

bool dinic_bfs() {
    fill(dist, dist + nodes, -1);
    dist[src] = 0;
    ll qt = 0;
    q[qt++] = src;
    for (ll qh = 0; qh < qt; qh++) {
        ll u = q[qh];
        for (ll j = 0; j < (ll) g[u].size(); j++) {
            Edge &e = g[u][j];
            ll v = e.to;
            if (dist[v] < 0 && e.f < e.cap) {
                dist[v] = dist[u] + 1;
                q[qt++] = v;
            }
        }
    }
    return (dist[dest] >= 0);
}

ll dinic_dfs(ll u, ll f) {
    if (u == dest) return f;
    for (ll &i = work[u]; i < (ll) g[u].size(); i++) {
        Edge &e = g[u][i];
        if (e.cap <= e.f) continue;
        ll v = e.to;
        if (dist[v] == dist[u] + 1) {
            ll df = dinic_dfs(v, min(f, e.cap - e.f));
            if (df > 0) {
                e.f += df;
                g[v][e.rev].f -= df;
                return df;
            }
        }
    }
    return 0;
}

ll maxFlow(ll _src, ll _dest) {
    src = _src;
    dest = _dest;
    ll result = 0;
    while (dinic_bfs()) {
        fill(work, work + nodes, 0);
        while (ll delta = dinic_dfs(src, LLONG_MAX))
            result += delta;
    }
    return result;
}

int main() {

    ll n, m;
    cin >> n >> m;
    nodes = n;
    for (ll i = 0; i < m; i++)
    {
        ll a, b, cost;
        cin >> a >> b >> cost;
        addEdge(a-1, b-1, cost);
    }

    cout << maxFlow(0, n-1) << endl;
    return 0;
}
