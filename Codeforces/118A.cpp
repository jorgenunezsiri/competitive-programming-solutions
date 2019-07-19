// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/118/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, res;
    res = "";
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e'
           && s[i] != 'u' && s[i] != 'i') {
            res += '.';
            res += s[i];
        }
    }
    cout << res << "\n";

    return 0;
}
