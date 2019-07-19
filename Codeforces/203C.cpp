// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/203/C

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

vector< pair<int, int > > pa;
int main()
{
    int n, d, a, b;

    cin >> n >> d;
    cin >> a >> b;

    for(int i = 0; i < n; i++)
    {
        pair<int, int> tmp;
        cin >> tmp.first >> tmp.second;
        pa.push_back(make_pair(tmp.first*a+tmp.second*b, i+1));
    }
    vector<int> res;
    sort(pa.begin(), pa.end());
    for(int i = 0; i < n; i++)
    {
        if(pa[i].first <= d)
        {
            d-=pa[i].first;
            res.push_back(pa[i].second);
        }
    }
    cout << res.size() << endl;
    if(res.size() > 0) {
        for(int i = 0; i < res.size()-1; i++)
        {
            cout << res[i] << " ";
        }
        cout << res[res.size()-1] << endl;
    }

    return 0;
}
