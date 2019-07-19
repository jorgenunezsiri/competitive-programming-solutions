// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2440

#include <iostream>
#include <string>

using namespace std;
int t, pt = 0;
string m, n;
bool sePuede = false, imprimir = false;
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        for(int i = 0; i < m.length(); i++)
        {
            if(m[i] == 'T')
            {
                sePuede = true;
            }
        }
        if(sePuede)
        {
            for(int i = 0; i < m.length(); i++)
            {
                pt = 0;
                if(m[i] == n[0])
                {
                    for(int j = i, z = 0; z < n.length(); z++, j++)
                    {
                        if(m[j] == n[z]) pt++;
                    }
                }
                if(pt == n.length()) break;
            }
            if(pt == n.length())
                cout << "Y" << "\n";
            else
                cout << "N" << "\n";
        }
        else
        {
            cout << "N" << "\n";
        }
        sePuede = false; pt = 0;

    }
    return 0;
}
