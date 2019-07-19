// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/540/A

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string inicio, fin;
    cin >> inicio >> fin;
    int mini = 0;
    for(int i = 0; i < n; i++)
    {
        mini += min( abs((inicio[i] - '0')-(fin[i] - '0')), 10-max((fin[i] - '0'),(inicio[i] - '0'))+min((fin[i] - '0'),(inicio[i] - '0')));
    }
    cout << mini << endl;
    return 0;
}
