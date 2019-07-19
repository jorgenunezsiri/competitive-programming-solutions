// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/PUCMM210/

#include <iostream>
#include <cmath>
#include <vector>
#define MOD 1000000003

using namespace std;

vector<long long> cubos;
vector<long long> sumaCubos;
long long temp;
int t, n;

int main()
{
    cubos.push_back(1);
    sumaCubos.push_back(1);

    for(long long j = 1, i = 2; i <= 1000000; i++, j++)
    {
        temp = ((( (i*i) % MOD ) * i) % MOD);

        cubos.push_back((temp + cubos[j-1])%MOD);

        sumaCubos.push_back( ( sumaCubos[j-1] + cubos[j] ) % MOD );
    }

    cin >> t;

    while(t--)
    {
        cin >> n;
        cout << sumaCubos[n-1] << "\n";
    }

    return 0;
}
