// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/384/A

#include <iostream>

using namespace std;

int n;
int main()
{
    cin >> n;
    cout << (n*n/2)+n%2 << "\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if( (i + j) % 2 == 0)
            {
                cout << "C";
            }
            else cout << ".";
        }
        cout << "\n";
    }

    return 0;

}
