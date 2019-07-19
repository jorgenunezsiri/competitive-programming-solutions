// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/320/A

#include <iostream>
#include <cstring>

using namespace std;
char numero[11];
bool magic = false;
int main()
{
    cin >> numero;
    for(int i = 0; i < strlen(numero); i++)
    {
        if(numero[i] == '1')
        {
            magic = true;
        }
        else if(numero[i] == '4' && numero[i-1] == '1')
        {
            magic = true;
        }
        else if(numero[i] == '4' && numero[i-1] == '4' && numero[i-2] == '1')
        {
            magic = true;
        }
        else
        {
            magic = false;
            break;
        }
    }
    if(magic) cout << "YES";
    else cout << "NO";
    return 0;
}
