// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/441/A

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

int n, money, k;
vector<vector<int> > v(100, vector<int>(0,100));
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> money;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            int temp; cin >> temp;
            v[i].push_back(temp);
        }
    }
    int cnt = 0;
    vector<int> res;
    for(int i = 0; i < v.size(); i++)
    {
        bool control = true;
        for(int j = 0; j < v[i].size(); j++)
        {
            if(money > v[i][j] && control)
            {
                cnt++;
                control = false;
                res.push_back(i+1);
            }
        }
    }
    if(cnt == 0) cout << "0" << "\n";
    else
    {
        cout << cnt << "\n";
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size()-1; i++)
        {
            cout << res[i] << " ";
        }
        cout << res[res.size()-1] << "\n";
    }

    return 0;
}
