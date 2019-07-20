// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1244

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    string cad;
    int pos;
}CAD;

bool comparacion(CAD c1, CAD c2) {
    if (c1.cad.size() == c2.cad.size()) {
        return c2.pos > c1.pos;
    }

    return c1.cad.size() > c2.cad.size();
}

int main() {
    int n;
    string linea, cadena;
    cin >> n;
    cin.ignore(1);
    for(int i = 0; i < n; i++) {
        getline(cin, linea);
        stringstream ss;
        ss << linea;
        vector<CAD> v;
        int pos = 0;
        while (ss >> cadena) {
            CAD entrada;
            entrada.cad = cadena;
            entrada.pos = pos;
            pos++;
            v.push_back(entrada);
        }

        sort(v.begin(), v.end(), comparacion);

        for(int i = 0; i < v.size()-1; i++) {
            cout << v[i].cad << " ";
        }
        cout << v[v.size()-1].cad << "\n";
    }

    return 0;
}
