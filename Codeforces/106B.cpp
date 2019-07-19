// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/106/B

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct comp{
    int speed, ram, hdd, cost;
}COMP;

bool outdated[110];
int main()
{
    int n;
    cin >> n;
    COMP input[110];
    for(int i = 0; i < n; i++)
    {
        cin >> input[i].speed >> input[i].ram >> input[i].hdd >> input[i].cost;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j) continue;
            if(outdated[i]) break;
            if(input[i].speed < input[j].speed && input[i].ram < input[j].ram && input[i].hdd < input[j].hdd)
            {
 
                outdated[i] = true;
            }
        }
    }
    int mini = (int)(1e9), posmin = 0;
    for(int i = 0; i < n; i++)
    {
        if(!outdated[i]){
            if(input[i].cost < mini){
                posmin = i;
            }
            mini = min(mini, input[i].cost);
        }
    }
    cout << posmin+1 << "\n";

    return 0;
}
