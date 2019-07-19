// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/379/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <cctype>

using namespace std;
typedef long long int ll;
int a, b;
int main()
{
    cin >> a >> b;
    int result = 0;
    result += a;
    while(a >= 0)
    {
        a -= b;
        if(a >= 0)
        {
            result++;
            a++;
        }
        else
        {
            break;
        }
    }
    cout << result << "\n";
    return 0;
}
