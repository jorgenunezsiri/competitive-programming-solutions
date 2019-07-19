// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1156

#include <iostream>
#include <vector>

using namespace std;
vector<int> arr;
int temp;

int main()
{
    while(true)
    {
        cin >> temp;
        if(temp == 42) break;
        arr.push_back(temp);
    }

    for(int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << "\n";
    }

    return 0;
}
