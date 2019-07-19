// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/385/A

#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <map>

using namespace std;

int n, maxi, c, temp;
vector<int> vec;
int main()
{
    cin >> n >> c;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    for(int i = 0; i < n-1; i++)
    {
        int d = (vec[i]-vec[i+1]-c);
        if(d > maxi) maxi = d;
    }
    cout << maxi << "\n";
    return 0;
}
