// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/478/C

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll r, g, b;
int main()
{
    cin >> r >> g >> b;
    vector<ll> v;
    v.push_back(r);
    v.push_back(g);
    v.push_back(b);
    sort(v.begin(), v.end());
    if(v[2] >= 2*(v[1]+v[0])) cout << (v[1]+v[0]) << '\n';
    else cout << ((v[2]+v[1]+v[0])/3) << '\n';
    return 0;
}
