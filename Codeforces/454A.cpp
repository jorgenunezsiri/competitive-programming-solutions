// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/454/A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int d = 0, cnt = 1;
    for(int i = 0; i < n/2; i++)
    {
        for(int j = 1; j <=n/2-d; j++)
        {
            cout << "*";
        }

        for(int k = 1; k <= cnt; k++)
        {
            cout << "D";
        }
        for(int j = 1; j <=n/2-d; j++)
        {
            cout << "*";
        }
        cout << "\n";
        d++;
        cnt+=2;
    }
    for(int i = 0; i <n; i++) cout << "D";
    cout << "\n";
    d = 1; cnt = n-2;
    for(int i = 0; i < n/2; i++)
    {
        for(int j = 1; j <=d; j++)
        {
            cout << "*";
        }
        for(int k = 1; k <= cnt; k++)
        {
            cout << "D";
        }
        for(int j = 1; j <=d; j++)
        {
            cout << "*";
        }
        cout << "\n";
        d++;
        cnt-=2;
    }
    return 0;
}
