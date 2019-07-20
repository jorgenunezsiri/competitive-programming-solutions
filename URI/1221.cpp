// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1221

#include <iostream>

using namespace std;

bool prime(int n)
{
    if(n == 2 || n == 3) return true;
    if(!(n & 1)) return false;
    if(!(n%3)) return false;
    for(int i = 5; i*i <= n+1; i+=2)
    {
        if(!(n%i)) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        if(prime(c))
        {
            cout << "Prime" << '\n';
        }
        else cout << "Not Prime" << '\n';
    }
    return 0;
}
