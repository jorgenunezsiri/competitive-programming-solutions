// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/472/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int sum = 0;
    for(int i = n-1; i >=0; i-=k)
    {
        sum += (v[i]-1)*2;
    }
    cout << sum << "\n";
    return 0;
}
