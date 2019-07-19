// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

string cadena;
vector<int> vec;
int main()
{
    cin >> cadena;
    for(int i = 0; i < cadena.length(); i++)
    {
        if(cadena[i] != '+') vec.push_back(cadena[i] - '0');
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
        if(i != vec.size()-1) cout << '+';
    }
    return 0;
}
