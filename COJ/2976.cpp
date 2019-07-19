// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2976

#include <iostream>
#include <vector>
using namespace std;

int n;
int main()
{
    while(cin >> n && n)
    {
        vector<int> v;
        int temp;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int sum = 0, sum1 = 0;
        int resi = 0, resj = 0, j;
        for(int i = 0; i < v.size()-1; i++)
        {
            sum += v[i];
            sum1 = 0;
            for(j = v.size()-1; j > i; j--)
            {
                sum1 += v[j];
            }

            if(sum == sum1)
            {
                resi = i+1;
                resj = j+2;
            }
        }

        if(resi == 0 && resj == 0) cout << "No equal partitioning.\n";
        else cout << "Sam stops at position "<< resi << " and Ella stops at position " << resj << ".\n";
    }
    return 0;
}
