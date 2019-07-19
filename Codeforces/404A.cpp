// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/404/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> v;
int main() {
    int n;
    cin >> n;
    string temp, result = "";
    for(int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
        result += temp;
    }
    bool sePuede = true;
    for (int i = 0, j = 0; i < v.size() && j < v.size(); i++, j++) {
        if (v[i][j] != result[0]) {sePuede = false; break;}
    }
    if(!sePuede) {
        cout << "NO\n";
        return 0;
    }
    for (int i = 0, j = v.size()-1; i < v.size() && j >= 0; i++, j--) {
        if (v[i][j] != result[0]) {sePuede = false; break;}
    }
    if(!sePuede) {
        cout << "NO\n";
        return 0;
    }

    if(result[0] == result[1]) {
        sePuede = false;
    }
    if(!sePuede) {
        cout << "NO\n";
        return 0;
    }
    int cnt = 0;
    char shouldBe = result[1];
    for(int i = 0; i < result.size(); i++) {
        if(result[i] == shouldBe) cnt++;
    }
    if(cnt == (n-1)*(n-1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
