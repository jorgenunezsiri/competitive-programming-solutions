// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2196

#include <iostream>
#include <cstring>

using namespace std;
int t;
char s[101];
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(s[strlen(s)-1] == '0' || s[strlen(s)-1] == '2' || s[strlen(s)-1] == '4' || s[strlen(s)-1] == '6' || s[strlen(s)-1] == '8')
            cout << "even" << "\n";
        else
            cout << "odd" << '\n';

    }
    return 0;
}
