// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/522/A

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

bool visited[210];
vector<int> v[210];
map<string,int> m;
int maxi;

void dfs(int value, int node) {
    if(visited[node]) return;

    visited[node] = true;
    maxi = max(maxi, value);
    for(int i = 0; i < v[node].size(); i++) {
        dfs(value+1, v[node][i]);
    }
}
pair<string, string> changeToLowerCase(string s1, string s2) {
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] >= 'A' && s1[i] <= 'Z') s1[i] += 32;
    }
    for(int i = 0; i < s2.size(); i++) {
        if(s2[i] >= 'A' && s2[i] <= 'Z') s2[i] += 32;
    }
    pair<string,string> result = make_pair(s1, s2);
    return result;
}
int main()
{
    int n;
    memset(visited, false, sizeof visited);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        string s1, tmp, s2;
        cin >> s1 >> tmp >> s2;
        pair<string,string> cadenas = changeToLowerCase(s1, s2);
        // Transform string to numbers using map...
        m[cadenas.first] = i;
        v[m[cadenas.second]].push_back(i);
    }
    maxi = 0;
    dfs(0, 0);

    cout << maxi+1 << endl;

    return 0;
}
