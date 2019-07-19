// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1444

#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;
typedef long long ll;
ll mergeSort(int arr[], ll array_size);
ll  _mergeSort(int arr[], int temp[], ll left, ll right);
ll merged(int arr[], int temp[], int left, int mid, int right);

ll n;
int arr[1000010];

ll mergeSort(int arr[], ll array_size)
{
    int *temp = new int[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

ll _mergeSort(int arr[], int temp[], ll left, ll right)
{
    ll mid, inv_count = 0;
    if (right > left)
    {
        mid = left+((right-left)/2);

        inv_count  = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid+1, right);

        inv_count += merged(arr, temp, left, mid+1, right);
    }
    return inv_count;
}

ll merged(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    ll inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i=left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}


int main()
{
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mergeSort(arr, n);
    return 0;
}
