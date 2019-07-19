// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/405/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> entrada;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        entrada.push_back(tmp);
        maxi = max(maxi, tmp);
    }

    // Counting sort
    vector<int> contador(maxi+1);

    for (int i = 0; i < entrada.size(); i++) {
        contador[entrada[i]] += 1;
    }

    for (int i = 0, j = 0; j < contador.size(); j++) {
        while (contador[j]--) {
            entrada[i++] = j;
        }
    }

    for(int i = 0; i < entrada.size()-1; i++)
    {
        cout << entrada[i] << " ";
    }

    cout << entrada[entrada.size()-1] << "\n";

    return 0;
}
