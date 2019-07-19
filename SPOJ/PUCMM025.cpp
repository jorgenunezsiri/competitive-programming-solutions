// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/PUCMM025/

#include <iostream>
#include <string>

using namespace std;
int cont;
string cadena;
int suma = 0, suma7 = 0, num4 = 0, num8 = 0, i, j, k;
int arr[6] = {-2, -3, -1, 2, 3, 1};

int main()
{
	while(cin >> cadena)
	{
		cont = suma = suma7 = 0;

		k = (cadena[cadena.size()-3] - '0') * 100;
		i = (cadena[cadena.size()-2] - '0') * 10;
		j = (cadena[cadena.size()-1] - '0');

		num8 = i + j + k;
		num4 = i + j;

		for(int i = 0, j = 0; i < cadena.size(); i++, j++)
		{
			suma += ((int)(cadena[i] - '0'));
			suma7 += ((int)(cadena[i] - '0')) * arr[j];
			if(arr[j] == 1) j = -1;
		}

		for(int i = 0; i < cadena.size(); i++)
		{
			if(cadena[i] == '1')
			{
				cont++;
			}
			if(cadena[i] == '2')
			{
				if(cadena[cadena.size()-1] == '0' || cadena[cadena.size()-1] == '2' || cadena[cadena.size()-1] == '4' ||
					cadena[cadena.size()-1] == '6' || cadena[cadena.size()-1] == '8')
				{
					cont++;
				}

			}
			if(cadena[i] == '3')
			{
				if(suma % 3 == 0) cont++;

			}
			if(cadena[i] == '4')
			{
				if(num4 % 4 == 0) cont++;

			}
			if(cadena[i] == '5')
			{
				if(cadena[cadena.size()-1] == '0' || cadena[cadena.size()-1] == '5') cont++;
			}
			if(cadena[i] == '6')
			{
				if(suma % 3 == 0)
				{
					if(cadena[cadena.size()-1] == '0' || cadena[cadena.size()-1] == '2' || cadena[cadena.size()-1] == '4' ||
						cadena[cadena.size()-1] == '6' || cadena[cadena.size()-1] == '8')
					{
						cont++;
					}
				}
			}
			if(cadena[i] == '7')
			{
				if(suma7 % 7 == 0) cont++;

			}
			if(cadena[i] == '8')
			{
				if(num8 % 8 == 0) cont++;
			}
			if(cadena[i] == '9')
			{
				if(suma % 9 == 0) cont++;
			}
		}

		cout << cont << "\n";
	}

	return 0;
}
