// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1050

#include <iostream>

using namespace std;

int n, cont;
int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    return gcd(b%a, a);
}
int main()
{
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        if(gcd(i, n) == 1) cont++;
    }
    cout << cont;
    return 0;
}
