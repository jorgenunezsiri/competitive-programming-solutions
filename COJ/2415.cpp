// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2415

#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.1415926535897932384626433832795

using namespace std;

int t, n, r, h;
double v;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> r >> h;
            v += (PI*( pow(double(r),2) )*h);
        }
        printf("%.2f\n", v);
        v = 0;
    }

    return 0;
}
