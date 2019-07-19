// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/472/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

typedef long long ll;

bool composite(ll n)
{
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    for(int i = 4; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(i + j == n && composite(i) && composite(j))
            {
                cout << i << " " << j << "\n";
                return 0;
            }
        }
    }

    return 0;
}
