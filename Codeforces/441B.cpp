// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/441/B

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
#define Min(arr,b) arr < b ? arr : b
#define Max(arr,b) arr > b ? arr : b
#define mp make_pair

int input[3010], n, v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> v;
    for(int i = 0; i < n; i++)
    {
        int ta, tb;
        cin >> ta >> tb;
        input[ta] += tb;
    }
    int ans = 0, inter = 0;
    for(int i = 1; i < 3002; i++)
    {
        inter = Min(v, input[i-1]);
        ans += inter;
        input[i-1] -= inter;

        if(inter >= 0 && input[i] > 0)
        {
            inter = Min(input[i], v-inter);
            ans += inter;
            input[i] -= inter;
        }
    }

    cout << ans << "\n";

    return 0;
}
