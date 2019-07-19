// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/572/A

#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
using namespace std;

vector<int> a, b;
int main()
{
    int na, nb, k, m;
    cin >> na >> nb;
    cin >> k >> m;
    for(int i = 0; i < na; i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < nb; i++)
    {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    if(a[k-1] < b[nb-m]) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
