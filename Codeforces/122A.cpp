// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/122/A

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool isLucky(int n) {
    stringstream ss;
    ss << n;
    string ent;
    ss >> ent;
    for (int i = 0; i < ent.size(); i++) {
        if (ent[i] != '4' && ent[i] != '7') return false;
    }
    return true;
}
vector<int> lucky;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= 1000; i++) {
        if (isLucky(i)) {
            lucky.push_back(i);
        }
    }
    bool almostLucky = false;
    for (int i = 0; i < lucky.size(); i++) {
        if (n % lucky[i] == 0) { almostLucky = true; break; }
    }
    if (almostLucky) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
