// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/SUMFOUR/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, cont, val;
int arr[4001][4];
vector<int> vec;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            vec.push_back(arr[i][0] + arr[j][1]);
        }
    }
    sort(vec.begin(), vec.end());

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            val = -(arr[i][2] + arr[j][3]);
            cont += upper_bound(vec.begin(), vec.end(), val) - lower_bound(vec.begin(), vec.end(), val);
        }
    }

    cout << cont << "\n";
    return 0;
}
