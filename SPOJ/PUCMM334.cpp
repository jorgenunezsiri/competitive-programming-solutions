// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/PUCMM334/

#include <iostream>
#include <algorithm>

using namespace std;
int n, suma, a[102];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }
    sort(a, a+n);
    if(a[n-1] >= n) cout << "-1" << "\n";
    else
    {
        if(suma % (n-1)== 0) cout << (suma/(n-1)) << "\n";
        else cout << "-1"<< "\n";
    }
    return 0;
}
