// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2424

#include <iostream>
#include <cstdio>

using namespace std;

int t, k, c, maximo;

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> c;
            if(c > maximo) maximo = c;
        }
        printf("Case %d: %d %d\n", i+1, k+1, maximo+1);
        maximo = 0;
    }

    return 0;
}
