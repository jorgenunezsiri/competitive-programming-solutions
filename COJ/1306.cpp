// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1306

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
int t, numero;
string num;

int Convertir(string cadena)
{
    int sum = 0;
    for(int i = cadena.size() - 1, cont = 0; cont < 2 ; i--, cont++)
    {
        sum += (cadena[i] - '0') * (pow((double)10, cont));
    }
    return sum;
}
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> num;
        numero = Convertir(num);
        if(numero % 4 == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
