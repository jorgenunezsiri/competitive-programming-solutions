// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/BSEARCH1/

#include <cstdio>

using namespace std;

int binarySearch(int v[], int value, int tam) {
	int low = 0;
	int high = tam-1;
	int mid = 0;
	while(low <= high) {
		mid = low + (high-low)/2;
		if (v[mid] >= value) high = mid -1;
		else low = mid + 1;
	}
	return low;
}

int n, q, numero;
int vec[100005];
int main()
{
    scanf("%d %d", &n, &q);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
    }

    int res = 0;

    for(int i = 0; i < q; i++)
    {
        scanf("%d", &numero);

        res = binarySearch(vec, numero, n);

        if(vec[res] != numero ) {
            printf("-1\n");
        } else {
            printf("%d\n", res);
        }
    }

    return 0;
}
