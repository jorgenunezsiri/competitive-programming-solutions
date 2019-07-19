// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/SAMER08F/

#include <iostream>

using namespace std;

int cuadrados[101], n, respuesta[100];

int main()
{
    ios_base::sync_with_stdio(false);
    cuadrados[0] = 0, cuadrados[1] = 1;
    for(int i = 2; i <= 100; ++i)
    {
        cuadrados[i] = (i * i) + cuadrados[i-1];
    }

    int i = 0, cont = 0;

    while(true)
    {
        cin >> n;
        if(n == 0) break;
        respuesta[i] = cuadrados[n];
        i++;
        cont++;
    }

    for(int i = 0; i < cont; i++)
    {
        cout << respuesta[i] << "\n";
    }
}
