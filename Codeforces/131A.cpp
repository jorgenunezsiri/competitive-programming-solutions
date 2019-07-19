// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/131/A

#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

char c[102];
char t;
int main()
{
    cin >> c;
    bool cond1 = true;
    bool cond2 = true;
    for(int i = 0; i < strlen(c); i++)
    {
        if(!(isupper(c[i])))
        {
            cond1 = false;
            break;
        }
    }
    if(islower(c[0]))
    {
        for(int i = 1; i < strlen(c); i++)
        {
            if(!(isupper(c[i])))
            {
                cond2 = false;
                break;
            }
        }
    }
    else cond2 = false;

    if(cond1 || cond2)
    {

        for(int i = 0; i < strlen(c); i++)
        {
            if(isupper(c[i]))
            {
                t = tolower(c[i]);
                cout << t;
            }
            else if(islower(c[i]))
            {
                t = toupper(c[i]);
                cout << t;
            }
        }
        cout << "\n";
    }
    else
    {
        cout << c << "\n";
    }

    return 0;
}
