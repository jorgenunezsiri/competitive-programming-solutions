// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1099

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
vector<int> arr;

int main()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n==0) break;
        arr.push_back(n);
        if(arr.size() == 3)
        {
            sort(arr.begin(), arr.end());
            if(pow(double(arr[0]), 2) + pow(double(arr[1]), 2) == pow(double(arr[2]), 2))
            {
                cout << "right" << "\n";
            }
            else
                cout << "wrong" << "\n";
            arr.clear();
        }
    }

    return 0;
}
