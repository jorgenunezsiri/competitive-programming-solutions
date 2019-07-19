// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/365/A

#include <iostream>
#include <sstream>
using namespace std;

int n, k, arr[105];

string iToString(int c)
{
    stringstream ss;
    ss << c;
    string i;
    ss >> i;
    return i;
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    size_t found;
    bool loTiene = true;
    int cont = 0;

    for(int i = 0; i < n; i++)
    {
        loTiene = true;
        string num = iToString(arr[i]);
        for(int j = 0; j <= k; j++)
        {
            string t = iToString(j);
            found = num.find(t);
            if(found != string::npos)
            {
                continue;
            }
            else
            {
                loTiene = false;
                break;
            }
        }
        if(loTiene) cont++;
    }

    cout << cont << endl;

    return 0;
}
