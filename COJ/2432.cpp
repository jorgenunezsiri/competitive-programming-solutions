// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2432

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;
int n, temp;
double median;
int main()
{
    while(true)
    {
        cin >> n;
        if(n == 0) return 0;
        vector<int> numbers;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            numbers.push_back(temp);
        }
        sort(numbers.begin(), numbers.end());
        if(n % 2 != 0)
        {
            median = numbers[n/2];
        }
        else
        {
            median = 0.5 * (numbers[n/2] + numbers[(n/2)-1]);
        }
        printf("%.1f\n", median);
        median = 0;
    }
}
