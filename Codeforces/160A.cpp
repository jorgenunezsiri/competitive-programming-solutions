// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), greater<int>());

    int sum = 0, cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        sum+=v[i]; cnt++;
        int sum2 = 0;
        for(int j = i+1; j < v.size(); j++)
        {
            sum2+=v[j];
        }
        if(sum > sum2) break;
    }
    cout << cnt << "\n";

    return 0;
}
