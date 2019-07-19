// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/432/A

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

int n, k;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int cont = 0, res = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if((v[i]+k) <= 5) cont++;
        if(cont == 3) {res++; cont = 0;}
    }
    cout << res << "\n";

    return 0;
}
