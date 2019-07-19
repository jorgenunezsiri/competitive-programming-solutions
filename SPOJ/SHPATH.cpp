// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/SHPATH/

#include <iostream>
#include <queue>
#include <vector>
#include <map>
#define pii pair<int, int>
#define CENTINELA 2147483647
using namespace std;

char ciudad[15];
int t, n, vecinos, nodo, peso, buscar;

int dijkstra(map<string, int> &ciudades, vector<pii> Grafo[10005])
{
	int distancia[10005], start, end, nodoAdyacente, pesoAdyacente;;
	bool visited[10005];
	map<string, int>::iterator it;

	cin >> ciudad;
	it = ciudades.find(ciudad);
	start = (*it).second;
	cin >> ciudad;
	it = ciudades.find(ciudad);
	end = (*it).second;

	for(int i = 1; i <= n; i++)
  {
      distancia[i] = CENTINELA;
      visited[i] = false;
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

int main()
{
	ios_base::sync_with_stdio(0);
	cin >> t;

	for(int i = 0; i < t; i++)
	{
		map<string, int> nombres;
		vector<pii> Grafo[10005];
		cin >> n;
		for(int k = 1; k <= n; k++)
		{
			cin >> ciudad >> vecinos;
			nombres.insert(pair<string,int>(ciudad, k));
			for(int j = 1; j <= vecinos; j++)
			{
				cin >> nodo >> peso;
				Grafo[k].push_back(pii(peso, nodo));
			}
		}
		cin >> buscar;
		for(int z = 0; z < buscar; z++)
		{
			cout << dijkstra(nombres, Grafo) << "\n";
		}
	}

	return 0;
}
