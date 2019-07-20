// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <iostream>

using namespace std;

int s, h, m, s1;

int main()
{
    cin >> s;
    h = (s/(60*60));
    m = (s/60)%60;
    s1 = s%60;
    cout << h << ":" << m << ":" << s1 << "\n";

    return 0;
}
