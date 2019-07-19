// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1238

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
char cadena[6];
int num, sum;

int Convertir_A_Entero(char cadena);
int factorial(int);
int main()
{
    while(true)
    {
        cin >> cadena;
        if(cadena[0] == '0') break;
        for(int i = 0; i < strlen(cadena); i++)
        {
            num = Convertir_A_Entero(cadena[i]);
            sum += (num * factorial(strlen(cadena)-i));
        }
        cout << sum << "\n";
        sum = 0;
    }

    return 0;
}

int factorial(int n)
{
    if(n <= 1)
        return 1;
    return n * factorial(n-1);
}

int Convertir_A_Entero(char cadena)
{
    int num = 0;

    num = num + (cadena - '0');
    return num;
}
