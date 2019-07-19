// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/552/B

#include <iostream>

using namespace std;

typedef long long int ll;
ll numberOfDigits(ll x)
{
    ll sum = 0;
    while(x > 0)
    {
        sum++;
        x /= 10;
    }
    return sum;
}

ll numDigitsPot(ll x)
{
    ll up = x-1;
    ll down = x/10;
    if(x == 10) return 9;
    else return ((up - down)+1)*numberOfDigits(up);
}

ll num;
int main()
{
    cin >> num;
    ll cantDigits = numberOfDigits(num);
    ll potAnterior = 1;
    for(int i = 1; i < cantDigits; i++)
    {
        potAnterior *= 10;
    }
    ll sum = 0;
    for(int i = 10; i <= potAnterior; i*=10)
    {
        sum += numDigitsPot(i);
    }
    sum += ((num - potAnterior)+1)*numberOfDigits(num);

    cout << sum << endl;
    return 0;
}
