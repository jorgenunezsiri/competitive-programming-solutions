// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/385/B

#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <map>
#include <string>

using namespace std;
string s;
int res, maximo = -1;
int main()
{
    cin >> s;
    if(s.length() > 3)
    {
        for(int i = 0; i < s.length()-3; i++)
        {
            if(s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r') maximo = i;
            res += maximo + 1;
        }
    }
    cout << res << "\n";

    return 0;
}
