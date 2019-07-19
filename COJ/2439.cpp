// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2439

#include <iostream>

using namespace std;

int t, s, l, j;
double total;
int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> l >> s;
        total = l;
        for(j = 0; ; j++)
        {
            total /= 3;
            total *= 5;
            if(total > s) break;
        }
        cout << j << "\n";
    }

    return 0;
}
