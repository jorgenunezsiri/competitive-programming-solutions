// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2958

#include <iostream>
#include <cmath>
#define MOD 1000000007

using namespace std;
typedef long long ll;

ll ExpMod(ll base, ll exp, ll mod)
{
	if(exp <= 0) return 1;
	ll baseSiguiente = (base%mod * base%mod)%mod;
	ll expSiguiente = exp >> 1;
	ll resultado = ExpMod(baseSiguiente,expSiguiente,mod);
	if((exp & 1) == 1) resultado = (resultado%mod * base%mod)%mod;
	return resultado;
}
ll fact(ll n)
{
	ll sum = 1;
	for(ll i = 2; i <= n; i++)
	{
		sum = (sum%MOD * i%MOD)%MOD;
	}
	return (sum%MOD);
}
ll factSimplificado(ll n, ll r)
{
	ll sum = 1;
	for(ll i = n; i >= 2; i--)
	{
		if(i == r) break;
		sum = (sum%MOD * i%MOD)%MOD;
	}
	return sum;
}

ll comb(ll n, ll r)
{
	return (factSimplificado(n,(n-r))%MOD*ExpMod(fact(r),(MOD-2),MOD)%MOD)%MOD;
}

int main()
{
	ios_base::sync_with_stdio(0);
	ll t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll h = (ll)(log((double)n)/log(2.0));
		cout << (comb((1 << h), n-((1 << h)-1))-1)%MOD << "\n";
	}
	return 0;
}
