// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/382/A

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
string a, b, left1, right1;
int main()
{
    cin >> a;
    cin >> b;
    int contleft = 0, contright = 0;
    bool encont = false;

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '|')
        {
            encont = true;
        }

        if(!encont && a[i] != '|')
        {
            contleft++;
            left1 += a[i];
        }
        else if(encont && a[i] != '|')
        {
            contright++;
            right1 += a[i];
        }
    }

    for(int i = 0; i < b.size(); i++)
    {
        if(contleft >= contright)
        {
            contright++;
            right1 += b[i];
        }
        else if(contright >= contleft)
        {
            contleft++;
            left1 += b[i];
        }
    }
    if(contleft == contright)
    {
        cout << left1 << "|" << right1 << "\n";
    }
    else
    {
        cout << "Impossible" << "\n";
    }
    return 0;
}
