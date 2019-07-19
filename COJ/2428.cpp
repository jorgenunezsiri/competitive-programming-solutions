// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2428

#include <iostream>

using namespace std;
int n, i, total, cont;
int main()
{
    while(true)
    {
        cin >> n;
        if(n == 0) return 0;
        for(i = 1; ; i+=2)
        {
            if(total < n)
            {
                total += i;
                cont++;
            }
            else
                break;
        }
        cout << cont << "\n";
        cont = total = 0;
    }
}
