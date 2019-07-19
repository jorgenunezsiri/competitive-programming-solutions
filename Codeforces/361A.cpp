// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/361/A

#include <iostream>

using namespace std;

int n, k;
int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j) cout << k << " ";
            else cout << "0 ";
        }
        cout << "\n";
    }

    return 0;
}
