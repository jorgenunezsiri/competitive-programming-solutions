// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1485

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char palabra[1001];
int main()
{
    cin >> palabra;

    sort(palabra, palabra+(strlen(palabra)));

    cout << palabra;

    return 0;
}
