// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=3285

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0);
	ll t, n;
	scanf("%lld", &t);
	while(t-- >0)
	{
		char s[100];
		scanf("%lld", &n);
		scanf("%s", s);
		int len = strlen(s);
		n = (n % len);
		if(n == len || n == 0)
		{
			printf("%s\n", s);
			continue;
		}
		for(int i = len-n; i<len; i++)
		{
			printf("%c", s[i]);
		}
		for(int i = 0; i < len; i++)
		{
			if(i == len-n) break;
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
