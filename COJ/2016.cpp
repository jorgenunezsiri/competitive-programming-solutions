// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2016

#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;
string posicion, fichas;
int contW, contB, temp;

int main()
{
	int ring[8][8] = {{1, 1, 1, 1, 1, 1, 1, 1},
					  {1, 2, 2, 2, 2, 2, 2, 1},
					  {1, 2, 3, 3, 3, 3, 2, 1},
					  {1, 2, 3, 4, 4, 3, 2, 1},
					  {1, 2, 3, 4, 4, 3, 2, 1},
					  {1, 2, 3, 3, 3, 3, 2, 1},
					  {1, 2, 2, 2, 2, 2, 2, 1},
					  {1, 1, 1, 1, 1, 1, 1, 1}};

	while(cin >> posicion >> fichas)
	{
		if(fichas[1] == 'N' || fichas[1] == 'B') temp += 3;
		if(fichas[1] == 'P') temp += 1;
		if(fichas[1] == 'T') temp += 5;
		if(fichas[1] == 'Q') temp += 11;
		if(fichas[1] == 'K') temp += 0;

		temp *= ring[(int)(posicion[1] - '1')][(int)(posicion[0] - 'a')];

		if(fichas[0] == 'W')
		{
			contW += temp;
		}
		else
		{
			contB += temp;
		}
		temp = 0;
	}

	cout << contW << " " << contB << "\n";
	if(contW > contB)
	{
		cout << "Advantage for white pieces\n";
	}
	else if(contW < contB)
	{
		cout << "Advantage for black pieces\n";
	}
	else
	{
		cout << "No decisive advantages\n";
	}
	return 0;
}
