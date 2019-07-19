// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2974

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

map<char,int> m;
bool cmp(string s1, string s2)
{
    for(int i = 0; i < s1.size() && i < s2.size(); i++)
    {
        if(m[s1[i]] < m[s2[i]]) return true;
        else if(m[s1[i]] > m[s2[i]]) return false;
    }
    return (s1.size() < s2.size());
}

int main()
{
    int cnt = 0;
    int n;
    while(cin >> n && n)
    {
        string cad, temp;
        vector<string> v;
        cin >> cad;
        for(int i = 0; i < cad.size(); i++) m[cad[i]] = i;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),cmp);
        cout << "year " << ++cnt << "\n";
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\n";
        }
        m.clear();
    }

    return 0;
}
