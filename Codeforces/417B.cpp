// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/417/B

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
vector<pii> vec;
map<pii, int> m;
int t, a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        vec.push_back(mp(a, b));
    }
    bool voyBien = true;
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i].first > 0)
        {
            if(!m.count(mp(vec[i].first-1,vec[i].second))) voyBien = false;
        }
        m[vec[i]]++;
    }
    if(voyBien) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
