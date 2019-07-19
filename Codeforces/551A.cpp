// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/551/A

#include <iostream>
#include <vector>

using namespace std;

int tmp;
vector<int> v;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size(); i++)
    {
        int cnt = 1;
        for(int j = 0; j < v.size(); j++)
        {
            if(v[j] > v[i]) cnt++;
        }
        if(i != v.size()-1) cout << cnt << " ";
        else cout << cnt << endl;
    }
    return 0;
}
