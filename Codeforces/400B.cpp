// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/400/B

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <limits>
#include <functional>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <utility>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair

int n, m;
char vec[1010][1010];
map<int,int> mini;
int tS, tG, res = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(vec[i][j] == 'S')
            {
                tS = j;
            }
            if(vec[i][j] == 'G')
            {
                tG = j;
            }
        }
        if((tS - tG) < 0)
        {
            cout << "-1\n";
            return 0;
        }
        res = tS - tG;
        mini[res]++;
    }

    cout << mini.size() << "\n";

    return 0;
}
