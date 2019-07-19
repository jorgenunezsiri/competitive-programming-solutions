// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2563

#include <iostream>
#include <string>

using namespace std;

string cadena;

int main()
{
    while(getline(cin, cadena))
    {
        int fir = cadena.find_first_of("#");
        int last = cadena.find_last_of("#");
        for(int i = 0; i < cadena.length(); i++)
        {
            if(i < fir || i > last)
            {
                cout << cadena[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
