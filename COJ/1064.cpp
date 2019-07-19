// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1064

#include <iostream>

using namespace std;
int h1, m1, h2, m2, resp;

int main()
{
    while(true)
    {
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        resp = (24*60)-((h1*60+m1)-(h2*60+m2));
        if(resp > (24*60)) resp = (h2*60+m2)-(h1*60+m1);
        cout << resp << "\n";
    }

    return 0;
}
