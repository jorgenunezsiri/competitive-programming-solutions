// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/452/A

#include <iostream>
#include <string>

using namespace std;

string cadena[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
int n;
int main()
{
    string input;
    cin >> n;
    cin >> input;

    for(int i = 0; i < 8; i++)
    {
        if(cadena[i].size() == n)
        {
            bool puedo = true;
            for(int j = 0; j < cadena[i].size(); j++)
            {
                if(input[j] != '.' && input[j] != cadena[i][j])
                {
                    puedo = false;
                    break;
                }
            }
            if(puedo)
            {
                cout << cadena[i] << "\n";
                return 0;
            }
        }
    }
    return 0;
}
