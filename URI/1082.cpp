// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1082

#include <iostream>
#include <vector>
#include <map>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

bool visited[26], visited2[26];
int t, v, e, total, parent;
map<char,int> charToInt;

void dfs(int i, vector<int> vec[26], vector<vector<int> > &res)
{
    visited[i] = true;
    for(int j = 0; j < vec[i].size(); j++)
    {
        if(!visited[vec[i][j]])
        {
            res[parent].push_back(vec[i][j]);
            dfs(vec[i][j], vec, res);
        }
    }
}

int main()
{
    for(int i = 0; i < 26; i++)
    {
        charToInt[(char)((int)'a'+i)] = i;
    }
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        vector<int> vec[26];
        vector<vector<int> > res(26,vector<int>());
        memset(visited,false,sizeof visited);
        memset(visited2,false,sizeof visited2);
        total = 0;
        cin >> v >> e;
        for(int j = 0; j < e; j++)
        {
            char temp1, temp2;
            cin >> temp1 >> temp2;
            vec[charToInt[temp1]].push_back(charToInt[temp2]);
            vec[charToInt[temp2]].push_back(charToInt[temp1]);
        }
        for(int j = 0; j < v; j++)
        {
            if(!visited[j]) {
                parent = j;
                dfs(j, vec, res);
                total++;
            }
        }
        cout << "Case #" << i+1 << ":\n";
        for(int j = 0; j < v; j++)
        {
            vector<char> res2;
            if(!visited2[j]) {
                res2.push_back((char)('a'+j));
                visited2[j] = true;
            }
            else continue;
            for(int k = 0; k < res[j].size(); k++)
            {
                if(!visited2[res[j][k]])
                {
                    res2.push_back((char)('a' + res[j][k]));
                    visited2[res[j][k]] = true;
                }
            }
            sort(res2.begin(), res2.end());
            for(int k = 0; k < res2.size(); k++)
            {
                cout << res2[k] << ",";
            }
            cout << "\n";
        }
        cout << total << " connected components\n\n";
    }
    return 0;
}
