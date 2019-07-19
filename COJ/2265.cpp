// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2265

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, control = 0;
    long long Po, sum = 0;

    cin >> n >> Po;

    long long Chi[n];

    for(int i = 0; i < n; i++)
    {
        cin >> Chi[i];
    }

    for(int i = 0; i < pow((double)2.0, n); i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(((i >> j) & 1) == 1)
                sum += Chi[j];
        }
        if(sum == Po) break;
        else sum = 0;
    }

    if(sum == Po)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
