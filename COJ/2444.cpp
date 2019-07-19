// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2444

#include <iostream>
#include <vector>

using namespace std;

vector<int> vec, temp;
int temp1, cont, n;

int main()
{
    while(cin >> temp1)
    {
        vec.push_back(temp1);
    }

    for(int i = 0; i < vec.size(); i++)
    {
        n = vec[i];
        while(n != 0)
        {
            temp.push_back(n & 1);
            n >>= 1;
        }

        for(int j = 0; j < temp.size(); j++)
        {
            if(temp[j] == 1) cont++;
        }
        if(cont % 2 != 0)
        {
            vec.erase(vec.begin());
            i--;
        }
        temp.clear();
        cont = 0;
    }

    cont = 0;
    for(int i = 0; i < vec.size(); i++)
    {
        cont++;
    }
    cout << cont << endl;
    return 0;
}
