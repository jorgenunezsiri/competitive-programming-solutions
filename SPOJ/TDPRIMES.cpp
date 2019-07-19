// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/TDPRIMES/

#include <iostream>
#include <cstdio>

using namespace std;

#define MAXN 100000010
bool m[MAXN];

void sieve()
{
    m[0] = true;
    m[1] = true;
    m[2] = false;

    for(int i = 2; i*2 <= MAXN; i++) m[i*2] = true;

    for(int i = 3; i*i <= MAXN; i+=2)
    {
        if(!m[i])
        {
            for(int h = 3; i*h <= MAXN; h+=2) m[i*h] = true;
        }
    }
}

int main()
{
    sieve();
    int cnt = 1;
    for(int i = 0; i < MAXN; i++)
    {
        if (!m[i]) {
            if (cnt % 100 == 1) printf("%d\n", i);
            cnt++;
        }
    }
    return 0;
}
