// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/124/A

#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        int r = n-i;
        if( (n - r) > a && r <= b) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
