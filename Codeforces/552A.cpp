// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/552/A

#include <iostream>

using namespace std;
typedef long long ll;

int m[100][100];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = y1-1; j < y2; j++)
        {
            for(int k = x1-1; k < x2; k++)
            {
                m[j][k]++;
            }
        }
    }
    ll sum = 0;
    for(int j = 0; j < 100; j++)
    {
        for(int k = 0; k < 100; k++)
        {
            sum += m[j][k];
        }
    }
    cout << sum << endl;  
}
