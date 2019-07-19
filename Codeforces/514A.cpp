// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/514/A

#include <iostream>
#include <cmath>
#include <climits>
#include <sstream>
#include <string>
using namespace std;

typedef long long ll;
ll mini = LLONG_MAX;

ll convert(string s)
{
    ll num1 = 0;
    for(int i = s.size()-1, cont = 0; i >= 0; i--, cont++)
    {
        num1 += (ll)(s[i]-'0')*pow((double)10.0, cont);
    }
    return num1;
}
string check(string s, int o)
{
    ll num2 = 0;
    int n1 = 9 - (ll)(s[o]-'0');
    s[o] = (char)(n1+'0');
    for(int i = s.size()-1, cont = 0; i >= 0; i--, cont++)
    {
        num2 += (ll)(s[i]-'0')*pow((double)10.0, cont);
    }
    if(num2 < mini) mini = num2;
    stringstream ss;
    ss << mini;
    s = ss.str();
    return s;
}

string s;
int main()
{
    cin >> s;
    mini = convert(s);
    for(int i = 0; i < s.size(); i++)
    {
        if(i == 0)
        {
            if(9 - (int)(s[i]-'0') != 0)
            {
                s = check(s, i);
            }
        }
        else
        {
            s = check(s, i);
        }
    }
    cout << mini << "\n";

    return 0;
}
