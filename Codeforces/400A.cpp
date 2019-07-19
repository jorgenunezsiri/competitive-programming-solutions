// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/400/A

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <limits>
#include <functional>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <utility>
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

#define Min(a,b) a < b ? a : b
#define Max(a,b) a > b ? a : b
#define mp make_pair

int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        char arr[13];
        vector<string> vec;
        int cnt = 0;
        for(int j = 0; j < 12; j++)
        {
            cin >> arr[j];
        }
        bool allX = true, control = true;
        for(int j = 0; j < 12; j++)
        {
            if(arr[j] == 'X' && control)
            {
                vec.push_back("1x12");
                control = false;
            }
            if(arr[j] != 'X' && allX) { allX = false;}
        }
        if((arr[0] == arr[6] && arr[0] == 'X') || (arr[1] == arr[7] && arr[1] == 'X') ||
           (arr[2] == arr[8] && arr[2] == 'X') || (arr[3] == arr[9] && arr[3] == 'X') ||
           (arr[4] == arr[10] && arr[4] == 'X') || (arr[5] == arr[11] && arr[5] == 'X'))
        {
            vec.push_back("2x6");
        }

        if((arr[0] == arr[4] && arr[4] == arr[8] && arr[0] == 'X' && arr[4] == 'X') ||
           (arr[1] == arr[5] && arr[5]== arr[9] && arr[1] == 'X' && arr[5] == 'X' ) ||
           (arr[2] == arr[6]&& arr[6] == arr[10] && arr[2] == 'X' && arr[6] == 'X') ||
           (arr[3] == arr[7] && arr[7]== arr[11] && arr[3] == 'X' && arr[7] == 'X'))
        {
            vec.push_back("3x4");
        }
        if((arr[0] == arr[3] && arr[3] == arr[6] && arr[6] == arr[9] && arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X') ||
           (arr[1] == arr[4] && arr[4] == arr[7] && arr[7] == arr[10] && arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X') ||
           (arr[2] == arr[5] && arr[5]== arr[8] && arr[8] == arr[11] && arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X'))
        {
            vec.push_back("4x3");
        }
        if((arr[0] == arr[2] && arr[2] == arr[4] && arr[4] && arr[6] && arr[6] == arr[8] && arr[8] == arr[10] && arr[0] == 'X' && arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X' && arr[8] == 'X') ||
           (arr[1] == arr[3] && arr[3]== arr[5] && arr[5] == arr[7] && arr[7] == arr[9] && arr[9] == arr[11] && arr[1] == 'X' && arr[3] == 'X' && arr[5] == 'X' && arr[7] == 'X' && arr[9] == 'X'))
        {
            vec.push_back("6x2");
        }

        if(allX)
        {
            vec.push_back("12x1");
        }
        cout << vec.size() << " ";
        if(vec.size() != 0)
        {
            for(int i = 0; i < vec.size()-1; i++)
            {
                cout << vec[i] << " ";
            }
            cout << vec[vec.size()-1] << "\n";
        }
        else cout << "\n";
    }

    return 0;
}
