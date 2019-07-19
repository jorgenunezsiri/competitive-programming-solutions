// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/379/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <cctype>

using namespace std;
typedef long long int ll;
int n;
int a[301];
int main()
{
    cin >> n;
    string result = "";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool puedo = true;
    for(int i = 0, k = 0; ;)
    {
        if(puedo)
        {
            if(result[k-1] != 'P' && a[i] > 0)
            {
                a[i]--;
                result += 'P';
                k++;
            }
            else
            {
                if(i == (n-1))
                {
                    string temp = "";
                    for(int j = 0; j < n-1; j++)
                    {
                        temp+= 'L';
                    }
                    result += temp;
                    k += (n-1);
                    i = 0;
                }
                else
                {
                    result += 'R';
                    i++; k++;
                }
            }
        }
        else
        {
            break;
        }
        puedo = false;
        for(int j = 0; j < n; j++)
        {
            if(a[j] != 0)
            {
                puedo = true;
                break;
            }
        }
    }

    cout << result << "\n";
    return 0;
}
