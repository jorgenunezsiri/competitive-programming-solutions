// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2012

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct {
    string cad;
    int val;
}stringMayor;

int valString(string);
vector<int> posiciones;

int main() {
    stringMayor Mayor;
    Mayor.val = 0;

    string x;
    for(int i=1; cin >> x; i++) {

        int valor = valString(x);

        if(valor > Mayor.val) {
            Mayor.val = valor;
            Mayor.cad = x;

            posiciones.clear();
        }

        if(valor == Mayor.val) {
            posiciones.push_back(i);
        }
    }

    cout << Mayor.val << endl;
    for(int i=0; i<posiciones.size(); i++) {
        cout << posiciones[i] << endl;
    }

    return 0;
}

int valString(string x) {
    int cantidad = 0,k=0;
    for(int i=0; i<x.size(); i++) {
        if(x[i] >= 'a' && x[i] <= 'z') {
            k++;
            cantidad += (int)x[i];
        }
    }

    return cantidad - ((int)'a' * k);
}
