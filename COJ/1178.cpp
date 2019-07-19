// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1178

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int t, n, temp, cont, sum;
vector<int> vec;

int main()
{
    cin >> t;
    for(int j = 0; j < t; j++)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            vec.push_back(temp);
        }
        sort(vec.begin(), vec.end());

        while(true)
        {
            if(vec.size() == 0) break;
            temp = vec.back();
            vec.pop_back();
            cont++;
            if(cont == 3)
            {
                sum += temp;
                cont = 0;
            }
        }
        cout << sum << "\n";
        sum = 0; cont = 0;
    }
    return 0;
}
