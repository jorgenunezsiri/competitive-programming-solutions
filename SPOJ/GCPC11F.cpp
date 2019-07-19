// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/GCPC11F/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;
typedef long long ll;
string s;
bool cmp(pair<int,char> p1, pair<int,char> p2)
{
    return p1.first > p2.first;
}
int main()
{
    int n;
    cin >> n;
    getline(cin, s);
    while(n--)
    {
        getline(cin, s);
        vector<pair<int,char> > v(26);
        for(int i = 0; i < 26; i++) {v[i].first = 0;v[i].second = 'A'+i;}
        for(int i = 0; i < s.size(); i++)
        {
            v[s[i] - 'A'].first++;
        }
        sort(v.begin(), v.end(), cmp);
        if(v[0].first == v[1].first) cout << "NOT POSSIBLE" << "\n";
        else
        {
            int d = ((int)v[0].second - 'E');
            if(d < 0) d = 26 + d;
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == ' ') continue;
                if((int)((int)s[i] - d) < 'A') {
                        s[i] -= d;
                        s[i] += 26;
                }
                else s[i] -= d;
            }
            cout << d << " ";
            for(int i = 0; i < s.size(); i++)
            {
                cout << s[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
