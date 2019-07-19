// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <string>

using namespace std;
char cadena1[101];
char cadena2[101];
int i, j;

int main()
{
    cin >> cadena1 >> cadena2;
    while(cadena1[i] || cadena2[j])
    {
        if(i != strlen(cadena1))
            cadena1[i] = tolower(cadena1[i]);
        if(j != strlen(cadena2))
            cadena2[j] = tolower(cadena2[j]);
        i++; j++;
    }

    if(strcmp(cadena1, cadena2) == 0)
    {
        cout << "0\n";
    }
    else if(lexicographical_compare(cadena1, cadena1+strlen(cadena1), cadena2, cadena2+strlen(cadena2)) == true)
    {
        cout << "-1\n";
    }
    else if(lexicographical_compare(cadena1, cadena1+strlen(cadena1), cadena2, cadena2+strlen(cadena2)) == false)
    {
        cout << "1\n";
    }

    return 0;
}
