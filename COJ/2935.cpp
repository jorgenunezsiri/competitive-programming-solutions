// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2935

#include <iostream>
#include <cmath>
#define MAX 1000010

using namespace std;
typedef long long ll;
ll t, n, b;
double precalc[MAX];

int main()
{
    // ln(n+1!) = ln(1) + ln(2) + ln(3) + ... ln(n) + ln(n+1)
    // ln(1) = 0
    double sum = 0;
    for(int i = 2; i < MAX; i++)
    {
        sum += (double)(log((double)i));
        precalc[i] = sum;
    }
    cin >> t;
    while(t--)
    {
        cin >> n >> b;
        cout << (ll)(ceil(precalc[n+1]/log((double)b))) << "\n";
    }

    return 0;
}
