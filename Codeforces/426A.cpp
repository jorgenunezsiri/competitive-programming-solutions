// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/426/A

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

int n, v;
int a[101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int sum = 0;
    for(int i = 0; i < n-1; i++)
    {
        sum += a[i];
    }
    if(sum <= v) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}
