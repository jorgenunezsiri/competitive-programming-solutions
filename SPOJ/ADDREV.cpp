// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/ADDREV/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

int Convertir_A_Entero(char cadena[]);
void Revertir(char c[]);

int main()
{
    ios_base::sync_with_stdio(false);
    int t;

    cin >> t;

    int num1[t], num2[t];
    long long respuesta[t];
    char num1char[11], num2char[11], respuesta2[22];

    for(int i = 0; i < t; i++)
    {
        cin >> num1char >> num2char;
        Revertir(num1char); Revertir(num2char);
        num1[i] = Convertir_A_Entero(num1char);
        num2[i] = Convertir_A_Entero(num2char);
        respuesta[i] = num1[i] + num2[i];
    }

    for(int i = 0; i < t; i++)
    {
        sprintf(respuesta2, "%d", respuesta[i]);
        Revertir(respuesta2);
        respuesta[i] = Convertir_A_Entero(respuesta2);
        cout << respuesta[i] << "\n";
    }

    return 0;
}

void Revertir(char c[])
{
    char tmp;
    for(int i = 0, j = strlen(c) - 1; i < j; i++,j--)
    {
        tmp = c[i];
        c[i] = c[j];
        c[j] = tmp;
    }
}

int Convertir_A_Entero(char cadena[])
{
    int i, num = 0, cont = 0;

    for(i = strlen(cadena) - 1; i >= 0; i--)
    {
        num = num + ((cadena[i] - '0') * pow((double)10.0, cont));
        cont++;
    }
    return num;
}
