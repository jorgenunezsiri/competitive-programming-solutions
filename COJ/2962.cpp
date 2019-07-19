// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2962

#include <iostream>

using namespace std;

string a[20];

void convert(int i)
{
    a[i] += a[i-1];
    a[i] += 'L';
    for(int j = a[i-1].size()-1; j>=0; j--)
    {
        if(a[i-1][j] == 'R') a[i] += 'L';
        else if(a[i-1][j] == 'L') a[i] += 'R';
    }
}
int main()
{
    a[0] = a[1] = 'L';
    for(int i = 2; i <= 15; i++)
    {
        convert(i);
    }
    int n;
    while(cin >> n)
    {
        if(n == -1) break;
        if(n == 0) cout << "\n";
        else cout << a[n] << "\n";
    }
    return 0;
}
