// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2425

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>

using namespace std;
int n;
double base, exponent, maximo, maximaBase, maximoExponente, temp;

bool cmp(pair<double, double> e1, pair<double,double> e2)
{
    double ex1, ex2;
    ex1 = (e1.second*(log(e1.first)));
    ex2 = (e2.second*(log(e2.first)));

    if(ex1 > ex2)
        return true;
    return false;
}

int main()
{
    while(true)
    {
        cin >> n;
        if(n == 0) return 0;
        for(int i = 0; i < n; i++)
        {
            cin >> base >> exponent;
            temp = exponent*(log(base));
            if(temp > maximo)
            {
                maximo = temp;
                maximaBase = base;
                maximoExponente = exponent;
            }
        }
        cout << maximaBase <<  " " << maximoExponente << "\n";
        maximo = maximaBase = maximoExponente = 0;
    }
}
