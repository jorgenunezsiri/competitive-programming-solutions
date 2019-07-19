// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/509/A

#include <iostream>

using namespace std;

int n;
int arr[10][10];
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;

    for(int i = 0; i < 10; i++) arr[0][i] = 1;
    for(int i = 0; i < 10; i++) arr[i][0] = 1;

    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    cout << arr[n-1][n-1] << "\n";
    return 0;
}
