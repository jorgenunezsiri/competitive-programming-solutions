// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2842

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <sstream>
#include <map>
#include <queue>
#include <functional>
#include <cstdlib>
#include <cctype>
#include <set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair
#define MAXN 10000010
bool m[MAXN];
int cant[MAXN];

// To know how many prime numbers there are in a range:
// quantity/ln(quantity), e.g. 10^7/ln(10^7)

inline bool palindromo(int num)
{
    int n = num;
    int rev = 0, dig;
    while (num > 0)
    {
         dig = num % 10;
         rev = rev * 10 + dig;
         num = num / 10;
    }
    return n == rev;
}
void sieve()
{
	m[0] = true;
    m[1] = true;
    m[2] = false;
    int cont = 0;

    for(int i = 2; i*2 <= MAXN; i++) m[i*2] = true;

    for(int i = 3; i*i <= MAXN; i+=2)
    {
        if(!m[i])
        {
            for(int h = 3; i*h <= MAXN; h+=2) m[i*h] = true;
        }
    }

    for(int i = 2; i <= MAXN; i++)
    {
        if(!m[i] && palindromo(i))
        {
            cont++;
        }
        cant[i] = cont;
    }
}

int t, k, z;
int main()
{
	sieve();
    scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d %d", &k, &z);
        printf("%d\n", (cant[z] - cant[k-1]));
	}
	return 0;
}
