// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1504

#include <iostream>
#include <vector>

using namespace std;
int t, a, b, cont;
vector<int> vec;

int generar(int n)
{
    if(n == 0) return 1;
    return (n%10) * generar(n/10);
}

int main()
{
    cin >> t;

    for(int i = 1; i <= 1000000; i++)
    {
        vec.push_back(generar(i));
    }

    for(int j = 0; j < t; j++)
    {
        cin >> a >> b;
        for(int i = a; i <= b; i++)
        {
            if(vec[i-1] % 2 == 0)
            {
                cont++;
            }
        }
        cout << cont << "\n";
        cont = 0;
    }

    return 0;
}
