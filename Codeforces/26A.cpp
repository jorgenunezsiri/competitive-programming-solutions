// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/26/A

#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <limits>
#include <functional>
#include <map>
#include <queue>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <utility>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair
#define MAXN 100000

int n;
bool primes[MAXN]; // 0 - prime, 1 - composite
void sieve()
{
    for (ll p = 2; p <= MAXN; ++p) {
        if (primes[p] == false) {
            for (int k = 2; k *p <= MAXN; ++k) {
                primes[k * p] = true;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    sieve();
    cin >> n;
    int cnt = 0, answ = 0;
    if(n < 6)
    {
        cout << "0" << "\n";
        return 0;
    }
    else
    {
        for (int i = 6; i <= n; i++)
        {
            cnt = 0;
            for(int j = 2; j < n; j++)
            {
                if(i%j == 0 && !primes[j])
                {
                    cnt++;
                }
            }
            if(cnt == 2) answ++;
        }
    }
    cout << answ << "\n";
    return 0;
}
