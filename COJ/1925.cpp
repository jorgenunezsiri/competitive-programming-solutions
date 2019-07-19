// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1925

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<long long> arr;

long long Revertir(long long, long long);
int t;
long long n;

int main()
{
    cin >> t;

    while(t--)
    {
        cin >> n;
        arr.push_back(Revertir(n, 0));
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}

long long Revertir(long long n, long long res)
{
    if(n == 0) return res;
    res = 10*res + (n%10);
    return Revertir(n/10, res);
}
