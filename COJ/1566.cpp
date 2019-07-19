// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1566

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
vector<int> sum;
int n;

int main()
{
    arr.push_back(1);
    sum.push_back(1);
    for(int j = 1, i = 2; i <= 500; i++, j++)
    {
        arr.push_back(i*i);
        sum.push_back(sum[j-1] + arr[j]);
    }

    while(true)
    {
        cin >> n;
        if(n == 0) break;
        cout << sum[n-1] << "\n";
    }

    return 0;
}
