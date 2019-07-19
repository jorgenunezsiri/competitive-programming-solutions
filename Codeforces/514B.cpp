// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/514/B

#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <utility>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;
map <pii,int> m;
pii inf = pii(INT_MAX,INT_MAX);

int main()
{
    int n, x0, y0, xi, yi, g;
    cin >> n >> x0 >> y0;
    for(int i = 0; i < n; i++)
    {
        cin >> xi >> yi;
        int n1 = xi-x0, n2 = yi-y0;
        if(n2 == 0) m[inf]++;
        else{
            g = __gcd(n1,n2);
            n1 /= g; n2 /= g;
            m[pii(n1,n2)]++;
        }
    }
    cout << m.size() << "\n";
    return 0;
}
