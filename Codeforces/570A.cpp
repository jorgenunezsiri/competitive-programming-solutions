// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/570/A

#include <iostream>
#include <algorithm>
using namespace std;

int mat[110][110];
int winners[110];
int cant[110];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
        int max = -1, win = 0;
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j] > max)
            {
                max = mat[i][j];
                win = j+1;
            }
        }
        winners[i] = win;
    }
    sort(winners, winners+m);
    for(int i = 0; i < m; i++)
    {
        cant[winners[i]]++;
    }
    int max = 0, winner = 0;
    for(int i = 0; i < m; i++)
    {
        if(cant[winners[i]] > max)
        {
            max = cant[winners[i]];
            winner = winners[i];
        }
    }
    cout << winner << endl;

    return 0;
}
