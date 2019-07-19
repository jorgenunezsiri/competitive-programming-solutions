// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/20/C

#include <iostream>
#include <queue>
#include <vector>
#include <climits>

#define pii pair<int, int>
#define MAXN 100005
#define INF INT_MAX

using namespace std;

int padre[MAXN];
vector<pii> Grafo[MAXN];
int distancia[MAXN];
bool visited[MAXN];

int n, m;

void dijkstra(int vertice)
{
    for (int i = 0; i < MAXN; i++)
    {
        padre[i] = -1;
        distancia[i] = INF;
        visited[i] = false;
    }
    distancia[vertice] = 0;
    priority_queue<pii, vector<pii>, greater<pii> > caminoMasCorto;
    caminoMasCorto.push(pii(0, vertice));

    int nodo, peso, nodoAdyacente, pesoAdyacente;

    while(!caminoMasCorto.empty())
    {
        nodo = caminoMasCorto.top().second;
        peso = caminoMasCorto.top().first;
        caminoMasCorto.pop();

        if(visited[nodo]) continue;

        for(int i = 0; i < Grafo[nodo].size(); i++)
        {
            nodoAdyacente = Grafo[nodo][i].second;
            pesoAdyacente = Grafo[nodo][i].first;
             
            if(!visited[nodoAdyacente] && (peso + pesoAdyacente <= distancia[nodoAdyacente]))
            {
                distancia[nodoAdyacente]  = (peso + pesoAdyacente);
                padre[nodoAdyacente] = nodo;
                caminoMasCorto.push(pii(distancia[nodoAdyacente], nodoAdyacente));
            }
        }
        visited[nodo] = true;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;

    int a, b, pesoNodo;

    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> pesoNodo;
        Grafo[a].push_back(pii(pesoNodo, b));
        Grafo[b].push_back(pii(pesoNodo, a));
    }

    int s, e;
    s = 1;
    e = n;
    dijkstra(s);
    vector<int> camino;
    if(distancia[e] != INF)
    {
        for(int i = e; i != -1; i = padre[i])
        {
            camino.push_back(i);
        }
         
        for (int i = camino.size() - 1; i > 0; i--)
        {
            cout << camino[i] << " ";
        }
        cout << camino[0] << "\n";
    }
    else cout << "-1" << "\n";
    return 0;
}
