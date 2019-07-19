// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/373/A

#include <iostream>
 
using namespace std;

int main()
{
    int k;
    char arr[4][4];
    cin >> k;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int cont[10];
    for(int i = 0; i < 10; i++)
    {
        cont[i] = 0;
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr[i][j] != '.')
            {
                cont[(arr[i][j] - '0')]++;
            }
        }
    }

    bool puedo = true;

    for(int i = 0; i < 4; i++)
    {
        puedo = true;
        for(int j = 0; j < 4; j++)
        {
            if(arr[i][j] != '.')
            {
                if(cont[(arr[i][j] - '0')] > 2*k)
                {
                    puedo = false;
                    break;
                }
            }
        }
        if(!puedo) break;
    }
    if(puedo) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
