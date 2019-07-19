// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <cctype>
#include <utility>

using namespace std;
typedef long long int ll;
int n;
bool turn = true;
vector<int> a;
int temp;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >>temp;
        a.push_back(temp);
    }
    int c = n;
    int s1, s2;
    s1 = s2 = 0;
    while(true)
    {
        if(turn)
        {
            if(a[c-1] > a[0])
            {
                s1 += a[c-1];
                a.pop_back();
            }
            else
            {
                s1 += a[0];
                a.erase(a.begin());
            }
            c--;
            turn = false;
        }
        else
        {
            if(a[c-1] > a[0])
            {
                s2 += a[c-1];
                a.pop_back();
            }
            else
            {
                s2 += a[0];
                a.erase(a.begin());
            }
            c--;
            turn = true;
        }
        if(a.empty()) break;
    }

    cout << s1 << " " << s2 << "\n";

    return 0;
}
