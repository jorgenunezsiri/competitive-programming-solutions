// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2968

#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

int n;
int main()
{
    cin >> n;
    while(n--)
    {
        vector<int> arr;
        bool sePuede = false;
        for(int j = 0; j < 6; j++)
        {
            int temp; cin >> temp;
            arr.push_back(temp);
        }
        int sum = 0, sum1 = 0;
        for(int i = 0; i < (1 << 6); i++)
        {
            sum = sum1 = 0;
            for(int j = 0; j < 6; j++)
            {
                if(((i >> j) & 1)) sum += arr[j];
                else sum1 += arr[j];
            }
            if(sum == sum1)
            {
                sePuede = true;
                break;
            }
        }
        if(sePuede) cout << "Tobby puede cruzar\n";
        else cout << "Tobby no puede cruzar\n";
    }

    return 0;
}
