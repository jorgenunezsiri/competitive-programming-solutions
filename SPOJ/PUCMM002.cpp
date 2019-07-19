// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/PUCMM002/

#include <iostream>
#include <algorithm>

using namespace std;

int n, cont = 0;
long long k, respuesta = 0;

int main()
{
    cin >> n >> k;

    long long arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n, greater<int>());

    for(int i = 0; i < n; i++)
    {
        if(respuesta < k)
        {
            respuesta += arr[i];
            cont++;
        }
        else
            break;
    }

    if(respuesta < k)
        cout << "IMPOSSIBLE";
    else
        cout << cont;

    return 0;
}
