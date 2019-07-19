// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/369/A

#include <iostream>
#include <vector>

using namespace std;

int d, cb, cp;
int temp;
vector<int> vec;
int main()
{
    cin >> d >> cb >> cp;
    int cont = 0;
    for(int i = 0; i < d; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == 1)
        {
            if(cb > 0) cb--;
            else cont++;
        }
        else if(vec[i] == 2)
        {
            if(cp > 0) cp--;
            else if(cb > 0) cb--;
            else cont++;
        }
    }
    cout << cont << endl;
    return 0;
}
