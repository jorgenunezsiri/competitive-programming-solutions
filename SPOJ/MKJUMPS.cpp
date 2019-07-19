// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/MKJUMPS/

#include <iostream>
#include <cstring>

using namespace std;

int n;
int m[10][10];
int i_moves[] = {1, 1, 2, 2, -1, -1, -2, -2};
int j_moves[] = {-2, 2, -1, 1, -2, 2, -1, 1};

inline bool isSafe(int i, int j)
{
    return (i >= 0 && i < 10 && j >= 0 && j < 10 && m[i][j] != 0 && m[i][j] != 2);
}

void solveProblem(int i, int j, int cont, int &ans)
{
    ans = max(ans,cont);
    int next_i, next_j;
    for(int kj = 0; kj < 8; kj++)
    {
        next_i = i + i_moves[kj];
        next_j = j + j_moves[kj];
        if(isSafe(next_i, next_j))
        {
            m[next_i][next_j] = 2;
            solveProblem(next_i, next_j,cont+1,ans);
            m[next_i][next_j] = 1;
        }
    }
    return;
}

int main()
{
    int cnt = 0;
    while(true)
    {
        int skipped, valid, total = 0,ans = 0;
        memset(m,0,sizeof m);
        cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++)
        {
            cin >> skipped >> valid;
            for(int j = skipped; j < valid+skipped; j++)
            {
                m[i][j] = 1;
                total++;
            }
        }
        int x = -1, y = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (x == -1 && y == -1 && m[i][j] == 1)
                {
                    x = i;
                    y = j;
                }
            }
        }
        m[x][y] = 2;
        solveProblem(x,y,1,ans);
        int a = total-ans;
        if(a == 1) cout << "Case " << ++cnt << ", " << a << " square can not be reached.\n";
        else cout << "Case " << ++cnt << ", " << a << " squares can not be reached.\n";
    }

    return 0;
}
