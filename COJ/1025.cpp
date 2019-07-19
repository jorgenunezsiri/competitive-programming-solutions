// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1025

#include <iostream>
#include <algorithm>

using namespace std;

int n, a[102], s, num;

int main()
{
    cin >> n;
    num = (n+1)/2;
    for(int i=0; i<n; i++) cin >> a[i];
    sort (a, a+n);
    for(int i=0; i<num; i++) s += (a[i]/2)+1;
    cout << s << "\n";
    return 0;
}
