// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/MERGSORT/

#include <iostream>
#define TAM 100000

using namespace std;

void mezcla(int [], int izda, int medio, int drcha);
void mergesort(int [], int primero, int ultimo);

int arreglo[TAM];
int i = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    while(cin >> arreglo[i])
    {
        i++;
    }

    mergesort(arreglo, 0, (i-1));

    for(int j = 0; j < i; j++)
    {
        cout << arreglo[j] << " ";
    }

    return 0;
}

void mergesort(int a[], int primero, int ultimo)
{
    int central;

    if(primero < ultimo)
    {
        central = primero + ((ultimo-primero)/2); //central = (primero+ultimo)/2;
        mergesort(a, primero, central);
        mergesort(a, central+1, ultimo);
        mezcla(a, primero, central, ultimo);
    }
}

void mezcla(int a[], int izda, int medio, int drcha)
{
    int temporal[TAM];
    int x, y, z;

    x = z = izda;
    y = medio+1;

    while(x <= medio && y <= drcha)
    {
        if(a[x] <= a[y])
        {
            temporal[z++] = a[x++];
        }
        else
        {
            temporal[z++] = a[y++];
        }
    }

    while(x <= medio)
    {
        temporal[z++] = a[x++];
    }

    while(y <= drcha)
    {
        temporal[z++] = a[y++];
    }

    for(z = izda; z <= drcha; z++)
    {
        a[z] = temporal[z];
    }
}
