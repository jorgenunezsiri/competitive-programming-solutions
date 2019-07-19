// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2909

#include <iostream>
#include <algorithm>
using namespace std;

int n, num;
int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    while(n--)
    {
        cin >> num;
        int cnt = 0, maxi = 0, res;
        for(int i = 1; i <= num; i++)
        {
            cnt = 0;
            for(int j = 1; j <= i; j++)
            {
                if(i % j == 0) cnt++;
            }

            if(cnt > maxi)
            {
                maxi = cnt;
                res = i;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
