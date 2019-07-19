// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2927

#include <iostream>

using namespace std;

bool matriz[1010][1010];
int n, m, a, b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        matriz[a-1][b-1] = true;
        matriz[b-1][a-1] = true;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(!matriz[i][j]) continue;
            else
            {
                for(int k = j+1; k < n; k++)
                {
                    if(!matriz[i][k] || !matriz[j][k]) continue;
                    if(matriz[i][k] && matriz[j][k])
                    {
                        cout << "NO" << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "YES" << "\n";

    return 0;
}
