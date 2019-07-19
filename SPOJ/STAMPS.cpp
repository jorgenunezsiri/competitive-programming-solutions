// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/STAMPS/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int t, stamps, n, temp, i, resultado;

int main()
{
	scanf("%d", &t);
	for(int j = 0; j < t; j++)
	{
		vector<int> vec;
		scanf("%d %d", &stamps, &n);
		for(i = 0; i < n; i++)
		{
			scanf("%d", &temp);
			vec.push_back(temp);
		}
		sort(vec.begin(), vec.end(), greater<int>());
		for(i = 0; i < n; i++)
		{
			resultado += vec[i];
			if(resultado >= stamps) break;
		}
		if(resultado >= stamps)
			printf("Scenario #%d:\n%d\n\n", j+1, i+1);
		else
			printf("Scenario #%d:\nimpossible\n\n", j+1);
		resultado = 0;
	}

	return 0;
}
