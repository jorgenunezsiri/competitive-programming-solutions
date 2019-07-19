// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <string>
using namespace std;

bool a[26];
int main()
{
    int n;
    string c;
    cin >> n >> c;
    for(int i = 0; i < n; i++)
    {
        if(c[i] >= 'A' && c[i] <= 'Z') c[i] += 32;
    }
    for(int i = 0; i < n; i++)
    {
        a[c[i]-'a'] = true;
    }
    for(int i = 0; i < 26; i++)
    {
        if(!a[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
