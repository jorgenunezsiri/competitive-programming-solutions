// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2002

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, temp1, cont, cont1, cont2, z, num;
vector<int> vec;
vector<int> temp;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp1;
        vec.push_back(temp1);
    }

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec.size(); j++)
        {
            if(vec[j] != vec[i])
            {
                temp.push_back(vec[j]);
            }
        }
        cont = 1;
        for(int k = 0; k < temp.size() - 1; k++)
        {
            if(temp[k] == temp[k+1]) cont++;
            else if(temp[k] != temp[k+1]) cont = 1;
            if(cont > cont2) cont2 = cont;
        }
        cont = 0;
        if(cont2 > cont1) cont1 = cont2;
        cont2 = 0;
        temp.clear();
    }

    cout << cont1;

    return 0;
}
