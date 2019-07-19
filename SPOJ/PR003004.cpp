// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/PR003004/

#include <iostream>

using namespace std;

typedef long long int ll;
ll sumDigits(ll x)
{
    ll sum = 0;
    while(x > 0)
    {
        sum += (x%10);
        x /= 10;
    }
    return sum;
}

ll digitsum(ll x)
{
    ll d = x%10;
    ll ans = 0;
    if(x == 0) return 0;
    ans += (d*(d-1))/2;
    ans += d*sumDigits(x/10);
    ans += 10*digitsum(x/10);
    ans += (x/10)*45;
    return ans;
}

int t;
ll a, b;
int main()
{
    cin >> t;
    while(t-- >0)
    {
        cin >> a >> b;
        ll res = (digitsum(b+1)-digitsum(a));
        cout << res << endl;
    }

    return 0;
}
