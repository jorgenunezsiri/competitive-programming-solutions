// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/LASTDIG/

#include <iostream>

typedef long long ll;

using namespace std;

ll ExpMod(ll base, ll exp, ll mod)
{
    if (exp <= 0)
        return 1;
    ll baseSiguiente = (base%mod * base%mod)%mod;
    ll expSiguiente = exp >> 1;
    ll resultado = ExpMod(baseSiguiente, expSiguiente, mod);
    if ((exp & 1) == 1)
        resultado = (resultado%mod * base%mod) % mod;
    return resultado;
}

ll t, a, b;
int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << ExpMod(a, b, (ll)10) << "\n";
    }

    return 0;
}
