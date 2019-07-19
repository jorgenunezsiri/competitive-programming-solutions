// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/NATALIAG/

#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>
#include <queue>
#define INF 1e9

using namespace std;

int t, m, n, fE, cE, distanciaMinima = INF;

struct Node
{
    pair<int, int> cord;
    int dist;
};

void camino(int i, int j, int dist, vector<string> &matriz, queue<Node> &Q)
{
    Node u;
    u.cord = pair<int, int>(i, j);
    u.dist = dist;
    Q.push(u);
}

bool puedo(int i, int j, vector<string> &matriz)
{
    if(i >= m || j >= n || i < 0 || j < 0) return false;
    if(matriz[i][j] == 'x' || matriz[i][j] == '*') return false;
    return true;
}

void BFS(vector<string> &matriz, queue<Node> &Q)
{
    Node v;
    v.cord = pair<int, int>(fE, cE);
    v.dist = 0;
    Q.push(v);

    int x, y;
    while(!Q.empty())
    {
        v = Q.front();
        Q.pop();
        x = v.cord.first; y = v.cord.second;

        if(matriz[x][y] == '#')
        {
            distanciaMinima = v.dist;
            break;
        }
        matriz[x][y] = 'x';
        if(puedo(x-1, y, matriz)) camino(x-1,y,v.dist+1, matriz, Q);
        if(puedo(x+1, y, matriz)) camino(x+1,y,v.dist+1, matriz, Q);
        if(puedo(x, y-1, matriz)) camino(x,y-1,v.dist+1, matriz, Q);
        if(puedo(x, y+1, matriz)) camino(x,y+1,v.dist+1, matriz, Q);
    }
}

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> m >> n;
        vector<string> matriz(m);
        queue<Node> Q;
        for(int j = 0; j < m; j++)
        {
            cin >> matriz[j];
            for(int u = 0; u < matriz[j].size(); u++)
            {
                if(matriz[j][u] == '$')
                {
                    fE = j; cE = u;
                }
            }
        }
        BFS(matriz, Q);
        if(distanciaMinima != INF)
            cout << distanciaMinima << "\n";
        else cout << "-1" << "\n";
        distanciaMinima = INF;
    }

    return 0;
}
