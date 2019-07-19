// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1157

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double factorial(double);
double resp;
int main()
{
    cout << "n" << " " << "e" << "\n" << "-" << " -----------\n";

    for(double i = 0; i < 10; ++i)
    {
        resp += ((double)(1.0/factorial(i)));
        cout << i << " ";
        if(i == 0) printf("1\n");
        else if(i == 1) printf("2\n");
        else if(i == 2) printf("2.5\n");
        else
        {
            printf("%.9f\n", resp);
        }
    }
    return 0;

}

double factorial(double n)
{
    if(n <= 1) return 1;
    return n * factorial(n-1);
}
