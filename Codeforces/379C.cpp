// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/379/C

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int n;
pair<int,int> a[1000000];
int b[1000000], res[1000000];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a+n);
    b[0] = a[0].first;
    for(int i = 1; i < n; i++)
    {
        b[i] = a[i].first;
        if(b[i] < b[i-1] + 1) b[i] = b[i-1] + 1;
    }
    for(int i = 0; i < n; i++) res[a[i].second] = b[i];
    for(int i = 0; i < n-1; i++)
    {
        cout << res[i] << " ";
    }
    cout << res[n-1] << "\n";
    return 0;
}
