// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/427/A

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

int n, temp, hired, crime;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int res=0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == (-1))
        {
            if(hired == 0) res++;
            else hired--;
        }
        else
        {
            hired+=v[i];
        }
    }
    cout << res << "\n";

    return 0;
}
