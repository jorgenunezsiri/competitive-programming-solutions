// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/574/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int cnt = 0;
    while(true) {
        sort(v.begin()+1, v.end(), greater<int>());
        if(v[0] > v[1]) {
            break;
        }
        else{
            if(v[1] != 0) {
                v[0]++;
                cnt++;
                v[1]--;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
