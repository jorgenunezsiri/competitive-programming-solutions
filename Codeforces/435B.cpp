// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/435/B

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cad;
    int k, indiceMaximo;
    char temp, maxi;
    cin >> cad >> k;
    for(int i = 0; i < cad.size(); ++i)
    {
        indiceMaximo = -1;
        maxi = '0';
        for(int j = i+1; j < cad.size(); ++j)
        {
            if((cad[j]-'0')>(cad[i]-'0') && (cad[j]-'0')>(maxi-'0') && k >= (j-i))
            {
                maxi = cad[j];
                indiceMaximo = j;
            }
        }
        if(k >= 0 && indiceMaximo != -1)
        {
            k -= (indiceMaximo-i);
            temp = cad[indiceMaximo];
            for(int j = indiceMaximo; j >= i+1; --j)
            {
                cad[j] = cad[j-1];
            }
            cad[i] = temp;
        }
    }
    cout << cad << "\n";

    return 0;
}
