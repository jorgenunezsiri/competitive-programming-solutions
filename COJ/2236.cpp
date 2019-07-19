// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2236

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, temp, sum, sum2, c = 1, cont, total;
vector<int> vec;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for(int i = vec.size() - 1; i >= 0; i--)
    {
        sum += vec[i];
        cont++;
        for(int j = 0; j < vec.size() - c; j++)
        {
            sum2 += vec[j];
        }
        if(sum > sum2) break;

        sum2 = 0;
        c++;
    }

    cout << cont << "\n";
    return 0;
}
