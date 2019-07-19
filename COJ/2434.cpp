// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2434

#include <iostream>
#include <vector>
#define N 1000

using namespace std;

bool temp[N];

void criba(bool vec[N], long long fin)
{
    vec[0] = 0;
    vec[1] = 0;

    for(long long i = 2; i <= fin; ++i)
    {
        vec[i] = 1;
    }

    for(long long i = 2; i*i <= fin; ++i)
    {
        if(vec[i] == 1)
        {
            for(long long h = 2; i*h <= fin; ++h)
                vec[i*h] = 0;
        }
    }
}
int n, cont;
vector<int> primos;

int main()
{
    criba(temp, N);
    primos.push_back(2);
    for(int j = 3; ; j+=2)
    {
        if(temp[j] == 1)
        {
            primos.push_back(j);
            cont++;
        }
        if(cont == 51) break;
    }

    while(true)
    {
        long long respuesta = 1;
        cin >> n;
        if(n == 0) return 0;
        for(int i = 0; primos[i] <= n; i++)
        {
            respuesta *= primos[i];
        }
        cout << respuesta << endl;
    }
}
