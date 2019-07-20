// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1171

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int> cant;
vector<bool> visited;

int main() {
    int n, tmp;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> tmp;

        v.push_back(tmp);
        cant.push_back(0);
        visited.push_back(false);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        cant[i] = upper_bound(v.begin(), v.end(), v[i]) -
                  lower_bound(v.begin(), v.end(), v[i]);

        if (!visited[v[i]]) {
            cout << v[i] << " aparece " << cant[i] << " vez(es)\n";
        }
        visited[v[i]] = true;
    }

    return 0;
}
