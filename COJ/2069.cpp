// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2069

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int t, d, p, temp, sum, contadorProblemas, acum;
vector<int> vec;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> d >> p;
        for(int j = 0; j < p; j++)
        {
            cin >> temp;
            vec.push_back(temp);
        }

        sort(vec.begin(), vec.end());

        sum = 5;

        for(int k = 0; k < vec.size(); k++)
        {
            sum += vec[k];
            if(sum <= d)
                contadorProblemas++;
            else
                break;
        }
        sum = 0; acum = 5;
        for(int z = 0; z < contadorProblemas; z++)
        {
            sum += (acum + vec[z]);
            acum += vec[z];

        }
        cout << contadorProblemas << " " << sum << "\n";

        contadorProblemas = 0;
        sum = 0;

        vec.clear();

    }

    return 0;
}
