// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/344/A

#include <iostream>

using namespace std;

int n, cnt;
string c, temp;
int main()
{
    cin >> n;
    cin >> c;
    temp = c;
    while(n-- > 1)
    {
        cin >> c;
        if(c.compare(temp) != 0)
        {
            cnt++;
        }
        temp = c;
    }
    cout << ++cnt << "\n";

    return 0;
}
