// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1285

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int n, m, cont;

bool esValida(int n, int tam)
{
    int d1, d2, d3, d4;
    if(tam == 1) return true;
    else if(tam == 2)
    {
        d1 = n % 10;
        d2 = (n / 10) % 10;
        if(d1 != d2) return true;
        return false;
    }
    else if(tam == 3)
    {
        d1 = (n % 10);
        d2 = (n / 10) % 10;
        d3 = (n / 100) % 10;
        if(d1 != d2 && d2 != d3 && d1 != d3) return true;
        return false;
    }
    else if(tam == 4)
    {
        d1 = (n % 10);
        d2 = (n / 10) % 10;
        d3 = (n / 100) % 10;
        d4 = (n / 1000) % 10;
        if(d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) return true;
        return false;
    }
}

int main()
{
    while(cin >> n >> m)
    {
        int tam = 0;
        for(int i = n; i <= m; i++)
        {
            if(i < 10) tam = 1;
            if(i >= 10 && i < 100) tam = 2;
            if(i >= 100 && i < 1000) tam = 3;
            if(i >= 1000 && i < 5001) tam = 4;
            if(esValida(i, tam)) cont++;
        }
        cout << cont << "\n";
        cont = 0;
    }
    return 0;
}
