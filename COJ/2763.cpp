// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2763

#include <iostream>
#include <vector>

using namespace std;

void func(int i, int j, int ind, vector<int> &entrada, vector<vector<int> > &salida)
{
    if(i == j) salida[ind].push_back(entrada[i]);
    else
    {
        int mid = (i + j) >> 1;
        salida[ind].push_back(entrada[mid]);
        func(i, mid-1, ind+1, entrada, salida);
        func(mid+1, j, ind+1, entrada, salida);
    }
}

int main()
{
    int k;
    cin >> k;
    int n = (1 << k)-1;
    vector<int> vec(n+1);
    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<vector<int> > respuesta(k+1);
    func(0, n-1, 0, vec, respuesta);
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < respuesta[i].size()-1; j++)
        {
            cout << respuesta[i][j] << " ";
        }
        cout << respuesta[i][respuesta[i].size()-1] << "\n";
    }

    return 0;
}
