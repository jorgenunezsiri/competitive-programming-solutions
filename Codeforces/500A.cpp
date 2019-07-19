// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/500/A

#include <iostream>
#include <vector>
using namespace std;

int n, t, temp;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> t;
    for(int i = 0; i < n-1; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    bool puedo = false;
    for(int i = 1; i <= v.size(); i+=v[i-1])
    {
        if(i == t) puedo = true;
    }
    if(v[v.size()-1] == 1 && t == n) puedo = true;
    if(puedo) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}
