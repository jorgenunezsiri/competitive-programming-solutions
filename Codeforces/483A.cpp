// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/483/A

#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
ll l,r;
int main()
{
    cin >> l >> r;
    if((r-l) < 2) cout << "-1" << "\n";
    else
    {
        bool printed = false;
        for(ll i = l; i <= r; i++)
        {
            for(ll j = i+1; j <= r; j++)
            {
                for(ll k = j+1; k <= r; k++)
                {
                    if(__gcd(i,j) == 1 && __gcd(j,k) == 1 && __gcd(i,k) != 1)
                    {
                        cout << i << " " << j << " " << k << "\n";
                        printed = true;
                        break;
                    }
                }
                if(printed) break;
            }
            if(printed) break;
        }
        if(!printed) cout << "-1" << "\n";
    }

    return 0;
}
