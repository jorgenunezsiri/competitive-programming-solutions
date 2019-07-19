// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/MINMAX/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> v;
        for(int j = 0; j < n; j++){
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        int maxi = 0;
        for(int j = 0; j < n; j++){
            maxi = max(v[j], maxi);
        }
        printf("Group #%d: %d\n", i+1, maxi);
    }
    return 0;
}
