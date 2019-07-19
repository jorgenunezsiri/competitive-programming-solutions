// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/TCCCCCC1/

#include <iostream>
#include <algorithm>

using namespace std;

struct resultado
{
    long long mayor;
    long long menor;
};

int main()
{
    int t;

    cin >> t;

    struct resultado AddMultiply[t];

    long long arr[3], temporal;
    int cont = 0;

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }

        sort(arr, arr+3);

        AddMultiply[i].menor = (arr[0] + arr[1])*arr[2]; //(a+b)*c
        temporal = (arr[0] + arr[2])*arr[1]; //(a+c)*b
        if(temporal < AddMultiply[i].menor)
            AddMultiply[i].menor = temporal;
        temporal = (arr[1] + arr[2])*arr[0]; //(b+c)*a
        if(temporal < AddMultiply[i].menor)
            AddMultiply[i].menor = temporal;
        temporal = (arr[0] * arr[1])+arr[2]; //(a*b)+c
        if(temporal < AddMultiply[i].menor)
            AddMultiply[i].menor = temporal;
        temporal = (arr[0] * arr[2])+arr[1]; //(a*c)+b
        if(temporal < AddMultiply[i].menor)
            AddMultiply[i].menor = temporal;
        temporal = (arr[1] * arr[2])+arr[0]; //(b*c)+a
        if(temporal < AddMultiply[i].menor)
            AddMultiply[i].menor = temporal;

        AddMultiply[i].mayor = (arr[0] + arr[1])*arr[2]; //(a+b)*c
        temporal = (arr[0] + arr[2])*arr[1]; //(a+c)*b
        if(temporal > AddMultiply[i].mayor)
            AddMultiply[i].mayor = temporal;
        temporal = (arr[1] + arr[2])*arr[0]; //(b+c)*a
        if(temporal > AddMultiply[i].mayor)
            AddMultiply[i].mayor = temporal;
        temporal = (arr[0] * arr[1])+arr[2]; //(a*b)+c
        if(temporal > AddMultiply[i].mayor)
            AddMultiply[i].mayor = temporal;
        temporal = (arr[0] * arr[2])+arr[1]; //(a*c)+b
        if(temporal > AddMultiply[i].mayor)
            AddMultiply[i].mayor = temporal;
        temporal = (arr[1] * arr[2])+arr[0]; //(b*c)+a
        if(temporal > AddMultiply[i].mayor)
            AddMultiply[i].mayor = temporal;
    }

    for(int i = 0; i < t; i++)
    {
        cout << AddMultiply[i].menor << " " << AddMultiply[i].mayor << "\n";
    }
    return 0;
}
