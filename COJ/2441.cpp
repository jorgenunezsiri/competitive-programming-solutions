// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2441

#include <iostream>

using namespace std;

int t, r, c, total;
int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> r >> c;
        total += ((r-1)*c);
        total += ((c-1)*r);
        if(total % 2 == 0)
            cout << "Second" << "\n";
        else
            cout << "First" << "\n";
        total = 0;
    }
    return 0;
}
