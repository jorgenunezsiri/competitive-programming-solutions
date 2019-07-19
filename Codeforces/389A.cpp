// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/389/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    bool allSame = false;
    while(!allSame)
    {
        sort(v.begin(), v.end(), greater<int>());
        for(int i = 0; i < n-1; i++)
        {
            if(v[i] > v[i+1]) v[i] = v[i] - v[i+1];
        }
        allSame = true;
        for(int i = 0; i < n-1; i++)
        {
            if(v[i] != v[i+1]) {allSame = false; break;}
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    cout << sum << "\n";
    return 0;
}
