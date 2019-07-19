// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/405/B

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
#define MAXN 10000010

int n, res, cnt, j;
char t;
vector<char> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    int cnt2 = 0;
    bool onlyPeriods = true, control = true;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == '.' && control)
        {
            cnt2++;
        }
        if(v[i] != '.')
        {
            control = false;
            onlyPeriods = false;
            break;
        }
    }
    res = 0;
    if(onlyPeriods)
    {
        for(int i = 0; i < n; i++)
        {
            res++;
        }
        cout << res << "\n";
        return 0;
    }

    if(v[cnt2] == 'R') res += cnt2;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == 'L')
        {
            cnt = 0;
            j = i+1;
            while(v[j] != 'R' && j < v.size())
            {
                if(v[j] == 'L')
                {
                    cnt = 0;
                    break;
                }
                if(v[j] == '.') cnt++;
                j++;
            }
            res+=cnt;
            i = j-1;
        }
        else if(v[i] == 'R')
        {
            cnt = 0;
            j = i+1;
            while(v[j] != 'L' && j < v.size())
            {
                if(v[j] == 'R' || j+1 == v.size())
                {
                    cnt = 0;
                    break;
                }
                if(v[j] == '.') cnt++;
                j++;
            }
            if(cnt % 2 != 0) res++;
            i = j-1;
        }
    }

    cout << res << "\n";

    return 0;
}
