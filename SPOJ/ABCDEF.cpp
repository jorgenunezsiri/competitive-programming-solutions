// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/ABCDEF/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXN 110

int n, x[MAXN], val;
long long res;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            for (int k = 0; k < n; k++) {
                v.push_back(x[i]*x[j]+x[k]);
            }
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (x[k] == 0) continue;
                val = (x[i]+x[j])*x[k];
                res += upper_bound(v.begin(), v.end(), val) - lower_bound(v.begin(), v.end(), val);
            }
        }
    }

    cout << res << "\n";
    return 0;
}
