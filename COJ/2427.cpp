// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2427

#include <iostream>
#include <vector>
#define N 2000000

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
vector<long long> primos;
int a, b, cont, j;
int main()
{
    criba(temp, N);
    primos.push_back(2);
    for(j = 3; j <= N; j+=2)
    {
        if(temp[j] == 1)
        {
            primos.push_back(j);
        }
    }
    // There are 78498 prime numbers less than 10^6.
    while(true)
    {
        cin >> a >> b;
        if(a == 0 && b == 0) return 0;
        for(j = 0; primos[j] <= b; j++)
        {
            if(primos[j] >= a) cont++;
        }
        cout << cont << endl;
        cont = 0;
    }
}
