// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=3321

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define MAX 1000010
#define MOD 10000000000
using namespace std;

typedef long long int ll;
vector<ll> primes;
bool m[MAX];

ll ans[MAX];

void criba() {
  m[0] = m[1] = true;

  for (ll i = 2; i <= MAX; i++) {
    if (!m[i]) {
      primes.push_back(i);
      for (ll h = 2; i*h <= MAX; h++) m[i*h] = true;
    }
  }
}

ll countDigits (ll n) {
	ll cnt = 0;
	while (n) {
		cnt++;
		n /= 10;
	}

	return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  criba();

  ans[0] = 1;
  for(ll i = 0; i < primes.size(); i++) {
    ans[i+1] = (primes[i]%MOD * ans[i]%MOD) % MOD;
  }

  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;
    vector<ll>::iterator it = upper_bound(primes.begin(), primes.end(), n);
    ll i = it - primes.begin();
    if (n > 30) {
    	ll digits = countDigits(ans[i]);
    	cout << string(10 - digits, '0') << ans[i] << "\n";
    } else {
    	cout << ans[i] << "\n";
    }
  }

  return 0;
}
