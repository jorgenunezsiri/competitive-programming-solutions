// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/282/A

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    int x = 0;
    string cadena;

    int i = 0;
    while(i < n)
    {
        cin >> cadena;
        if(cadena == "++X" || cadena == "X++")
        {
            x += 1;
        }
        if(cadena == "--X" || cadena == "X--")
        {
            x -= 1;
        }
        i++;
    }

    cout << x;
}
