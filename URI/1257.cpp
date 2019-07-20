// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1257

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int t, n;
string cadena;

int main()
{
    cin >> t;
    while(t-->0)
    {
        cin >> n;
        int cont = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> cadena;
            for(int j = 0; j < cadena.size(); j++)
            {
                cont += (cadena[j] - 'A') + j + i;
            }
        }
        cout << cont << "\n";
    }
    return 0;
}
