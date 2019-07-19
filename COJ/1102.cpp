// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1102

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string cadena;
int sum;

int main()
{
    while(true)
    {
        cin >> cadena;
        if(cadena[0] == '0') break;
        for(int i = 0; i < cadena.size(); i++)
        {
            if(i % 2 == 0)
            {
                sum += (cadena[i] - '0');
            }
            else
            {
                sum -= (cadena[i] - '0');
            }
        }

        if(sum % 11 == 0)
        {
            cout << cadena << " is a multiple of 11.\n";
        }
        else
        {
            cout << cadena << " is not a multiple of 11.\n";
        }
        sum = 0;
        cadena = "";

    }

    return 0;
}
