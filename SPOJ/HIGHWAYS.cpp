// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/HIGHWAYS/

#include <iostream>
#include <queue>
#include <vector>
#define pii pair<int, int>
#define CENTINELA 2147483647
using namespace std;

int dijkstra(int cities, int highways, int start, int end)
{
    vector<pii> Grafo[100005];
    int distancia[100005];
    bool visited[100005];
    int c1, c2, minutos, nodo, peso, nodoAdyacente, pesoAdyacente;

    for(int i = 0; i <= cities; i++)
    {
        distancia[i] = CENTINELA;
        visited[i] = false;
    }

    for(int i = 0; i < highways; i++)
    {
        cin >> c1 >> c2 >> minutos;
        Grafo[c1].push_back(pii(minutos, c2));
        Grafo[c2].push_back(pii(minutos, c1));
    }

    distancia[start] = 0;
    priority_queue<pii, vector<pii>, greater<pii> > caminoMasCorto;
    caminoMasCorto.push(pii(0, start));

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
                distancia[nodoAdyacente] = (peso + pesoAdyacente);
                caminoMasCorto.push(pii(distancia[nodoAdyacente], nodoAdyacente));
            }

        }
        visited[nodo] = true;
        if(nodo == end) break;
    }

    return distancia[end];
}

int t, n, m, s, e, d;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> m >> s >> e;
        d = dijkstra(n, m, s, e);
        if(d != CENTINELA) cout << d << "\n";
        else  cout << "NONE" << "\n";
    }
}
