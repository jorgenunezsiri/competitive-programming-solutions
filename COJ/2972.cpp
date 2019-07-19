// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2972

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> v;
        int ini = 2, fin = n*n;
        for(int i = 0; i < n; i++)
        {
            if(i & 1)
            {
                v.push_back(ini++);
            }
            else
            {
                v.push_back(fin--);
            }
        }
        for(int i = 0; i < n-1; i++)
        {
            cout << v[i] << " ";
        }
        cout << v[n-1] << "\n";
    }

    return 0;
}
