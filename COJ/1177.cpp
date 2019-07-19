// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1177

#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

int G, tam;
char cadena[105];
int main()
{
    while(true)
    {
        cin >> G;
        int cont = 0, indi = 0;
        if(G == 0) break;
        cin >> cadena;
        tam = strlen(cadena)/G;
        vector<vector<char> > vec(105, vector<char>());
        for(int i = 0; i < strlen(cadena); i++)
        {
            vec[indi].push_back(cadena[i]);
            cont++;
            if(cont == tam)
            {
                cont = 0;
                indi++;
            }
        }
        char temp;
        for(int i = 0; i < indi; i++)
        {
            for(int j = 0, k = vec[i].size()-1; j < k; j++, k--)
            {
                temp = vec[i][k];
                vec[i][k] = vec[i][j];
                vec[i][j] = temp;
            }
        }
        for(int i = 0; i < indi; i++)
        {
            for(int j = 0; j < vec[i].size(); j++)
            {
                cout << vec[i][j];
            }
        }
        cout << "\n";
    }
    return 0;
}
