// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n-- > 0)
    {
        string s;
        cin >> s;
        if(s.size() > 10)
        {
            cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
}
