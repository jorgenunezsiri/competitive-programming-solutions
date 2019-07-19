// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <string>
using namespace std;

string ent = "", hello = "hello";
int main () {
    cin >> ent;
    int cnt = 0;
    for(int i = 0; i < ent.size(); i++) {
        if (ent[i] == hello[cnt]) cnt++;
    }

    if (cnt == hello.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
