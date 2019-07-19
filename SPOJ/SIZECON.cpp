// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/SIZECON/

#include <iostream>
using namespace std;
int t,s,n;
main()
{
    cin >> t;
    while(t-- && cin >> n)
    {
        if(n > 0) s+=n;
    }
    cout << s;
}
