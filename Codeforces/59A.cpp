// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cntLower = 0, cntUpper = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') cntLower++;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') cntUpper++;
    }
    if(cntLower >= cntUpper)
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
            cout << s[i];
        }
        cout << endl;
    }
    else
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
