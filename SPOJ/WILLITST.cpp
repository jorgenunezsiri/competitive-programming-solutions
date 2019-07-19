// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/WILLITST/

#include <iostream>

using namespace std;
typedef long long ll;
ll n;
int main()
{
    cin >> n;
    int cnt = 0;
    for(ll i = 0; i < 64; i++)
    {
        if(((1LL << i) & n) != 0)
        {
            cnt++;
        }
    }
    if(cnt == 1) cout << "TAK" << "\n";
    else cout << "NIE" << "\n";

    return 0;
}
