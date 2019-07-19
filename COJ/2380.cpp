// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2380

#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int n, t, cont, sum;

int main()
{
    cin >> t;

    while(t--)
    {
        cin >> n;
        while(n != 0)
        {
            arr.push_back(n & 1);
            n >>= 1;
        }
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 1) cont++;
        }
        sum += cont;
        cont = 0; arr.clear();
    }
    cout << sum;
    return 0;
}
