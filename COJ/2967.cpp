// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2967

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int n, num;
vector<int> v;
bool mark[500];

bool is_prime(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void primos(int n)
{
    v.push_back(2);
    for(int i = 3; i < n; i+=2)
    {
        if(is_prime(i)) v.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    primos(400);

    for(int i = 0; i < n; i++)
    {
        memset(mark,0,sizeof mark);
        int cont = 0;
        cin >> num;
        for(int j = 2; j < num; j++)
        {
            if(binary_search(v.begin(),v.end(),(num-j)) && !mark[j] && !mark[num-j] && is_prime(j))
            {
                mark[j] = true; mark[num-j] = true;
                cont++;
            }
        }
        cout << cont << "\n";
    }
    return 0;
}
