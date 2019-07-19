// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/313/A

#include <iostream>
#include <cmath>

using namespace std;
int num, mayor, temp;
int main()
{
    cin >> num;
    if(num > 0)
    {
        cout << num;
        return 0;
    }
    mayor = num;
    temp = (num/10);
    if(mayor < temp)
        mayor = (num/10);
    temp = (num%10)+(num/100)*10;
    if(mayor < temp)
        mayor = (num%10)+(num/100)*10;
    cout << mayor;
    return 0;
}
