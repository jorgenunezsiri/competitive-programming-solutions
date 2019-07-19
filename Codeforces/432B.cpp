// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/432/B

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <sstream>
#include <map>
#include <queue>
#include <functional>
#include <cstdlib>
#include <cctype>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair

int n, x, y;
vector<pii> v;
int home[100010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(mp(x, y));
        home[x]++;
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << (n-1)+home[v[i].second] << " " << (n-1)-home[v[i].second] << "\n";
    }
    return 0;
}
