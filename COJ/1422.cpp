// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1422

#include <iostream>
#define MOD 1000000009
#define N 1000020
using namespace std;
typedef long long ll;

ll tree[4*N+1],lazy[4*N+1];
void build(int node, int lo, int hi)
{
	if(lo == hi)
	{
		tree[node] = 1;
		return;
	}
	ll mid = lo+((hi-lo)/2);
	build(2*node,lo,mid);
	build(2*node+1,mid+1,hi);
	tree[node] = (tree[2*node]+tree[2*node+1]) % MOD;
}
void propagation(int node) {
    lazy[2*node] = (lazy[2*node] * lazy[node]) % MOD;
    lazy[2*node+1] = (lazy[2*node+1] * lazy[node]) % MOD;
    tree[2*node] = (tree[2*node] * lazy[node]) % MOD;
    tree[2*node+1] = (tree[2*node+1] * lazy[node]) % MOD;
    lazy[node] = 1;
}
ll query(int node, int lo, int hi, int i, int j)
{
	if(hi < i || lo > j || lo > hi) return 0;
	if(lo >= i && hi <= j) return tree[node];
	if(lazy[node] != 1) propagation(node);
	ll mid = lo+((hi-lo)/2);
	ll p1 = query(2*node,lo,mid,i,j);
	ll p2 = query(2*node+1,mid+1,hi,i,j);
	return (p1+p2) % MOD;
}

void update(int node, int x, int lo, int hi,int i, int j)
{
	if(hi < i || lo > j || lo > hi) return;
	if(lo >= i && hi <= j)
	{
		tree[node] = (tree[node] * x) % MOD;
		lazy[node] = (lazy[node] * x) % MOD;
		return;
	}
	if(lazy[node] != 1) propagation(node);
	ll mid = lo+((hi-lo)/2);
	update(2*node,x,lo,mid,i,j);
	update(2*node+1,x,mid+1,hi,i,j);
	tree[node] = (tree[2*node]+tree[2*node+1]) % MOD;
}

int main()
{
	ll n, m, p, x, y, k;
	while(cin >> n >> m)
	{
		for(ll i = 0; i <= 4*N+1; i++) lazy[i] = 1;
		build(1,0,N-1);
		for(int i = 0; i < m; i++)
		{
			cin >> p;
			if(p == 1)
			{
				cin >> x >> y;
				cout << query(1,0,N-1,x-1,y-1) << '\n';
			}
			else
			{
				cin >> x >> y >> k;
				update(1,k,0,N-1,x-1,y-1);
			}
		}
	}
	return 0;
}
