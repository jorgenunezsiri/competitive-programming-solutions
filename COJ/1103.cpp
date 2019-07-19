// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1103

#include <iostream>
#include <cstdio>
#define N 7500

using namespace std;
long long maneras[N];
int n, monedas[] = {1, 5, 10, 25, 50};
int main()
{
    maneras[0] = 1;
    for(int i = 0; i < 5; i++)
    {
        for(int j = monedas[i]; j < N; j++)
        {
            maneras[j] += maneras[j - monedas[i]];
        }
    }
    while(cin >> n)
    {
        cout << maneras[n] << "\n";
    }
    return 0;
}
