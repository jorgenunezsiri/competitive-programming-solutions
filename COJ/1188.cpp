// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1188

#include <iostream>
#include <cstring>

using namespace std;

char a[11], b[11];
int sum;
int main()
{
    cin >> a >> b;
    for(int i = 0; i < strlen(a); i++)
    {
        for(int j = 0; j < strlen(b); j++)
        {
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }

    cout << sum << "\n";
    return 0;
}
