// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1430

#include <iostream>
#include <string>
using namespace std;

string cad;
const double W = 1.0;
const double H = 0.5;
const double Q = 0.25;
const double E = 0.125;
const double S = (1.0/16.0);
const double T = (1.0/32.0);
const double X = (1.0/64.0);
int main()
{
    while(cin >> cad) {
        if(cad == "*") break;
        int cnt = 0;
        for(int i = 0; i < cad.size()-1; i++)
        {
            double total = 0;
            if(cad[i] == '/')
            {
                for(int j = i+1; cad[j] != '/' && j < cad.size(); j++)
                {
                    if(cad[j] == 'W') total+=W;
                    else if(cad[j] == 'H') total+=H;
                    else if(cad[j] == 'Q') total+=Q;
                    else if(cad[j] == 'E') total+=E;
                    else if(cad[j] == 'S') total+=S;
                    else if(cad[j] == 'T') total+=T;
                    else if(cad[j] == 'X') total+=X;
                }
                if(total == 1.0) cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
