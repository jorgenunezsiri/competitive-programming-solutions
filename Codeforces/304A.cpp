// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/304/A

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cont = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            int elevo = i*i + j*j;
            int k = (int)sqrt((double)elevo);
            if(k*k == elevo && k <= n)
            {
                cont++;
            }
        }
    }

    cout << cont << "\n";
    return 0;
}
