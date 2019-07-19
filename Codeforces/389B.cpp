// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/389/B

#include <iostream>

using namespace std;

char matriz[110][110];
int n;
bool safe(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < n && matriz[i][j] != '.');
}
bool checkForCross(int i, int j)
{
    /* i,j
       i+1,j-1 i+1,j i+1,j+1
       i+1,j*/
    if(!safe(i,j) || !safe(i+1,j-1) || !safe(i+1,j) || !safe(i+1,j+1) || !safe(i+2,j))
    {
        return false;
    }
    else{
        matriz[i][j] = '.';
        matriz[i+1][j-1] = '.';
        matriz[i+1][j] = '.';
        matriz[i+1][j+1] = '.';
        matriz[i+2][j] = '.';
        return true;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }
    if(matriz[0][0] == '#' || matriz[0][n-1] == '#' || matriz[n-1][0] == '#' || matriz[n-1][n-1] == 0)
    {
        cout << "NO" << '\n';
        return 0;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matriz[i][j] != '.')
                {
                    if(!checkForCross(i,j))
                    {
                        cout << "NO" << '\n';
                        return 0;
                    }
                }
            }
        }
        cout << "YES" << "\n";
    }
    return 0;
}
