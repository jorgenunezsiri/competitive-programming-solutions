// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1215

#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

string cadena;
int t, h1, h2, m1, m2, s1, s2;

int main()
{
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> cadena;
		string temp = "";
		int contPa = 0, indi = 0;
		vector<string> vec;
		bool ya1, ya2, ya3, ya4, ya5, ya6;
		ya1 = ya2 = ya3 = ya4 = ya5 = ya6 = true;
		for(int j = 0; j < cadena.length(); j++)
		{
			if(cadena[j] == ')') contPa++;

			temp += cadena[j];

			if(contPa == 2 && ya1)
			{
				vec.push_back(temp);
				contPa = 0;
				temp = "";
				ya1 = false;
			}
			if(contPa == 4)
			{
				if(ya2 && !ya1)
				{
					vec.push_back(temp);
					contPa = 0;
					temp = "";
					ya2 = false;

				}
				if(ya4 && !ya3 && !ya2 && !ya1)
				{
					vec.push_back(temp);
					contPa = 0;
					temp = "";
					ya4 = false;

				}
				if(ya6 && !ya5 && !ya4 && !ya3 && !ya2 && !ya1)
				{
					vec.push_back(temp);
					contPa = 0;
					temp = "";
					ya6 = false;

				}

			}
			if(contPa == 3)
			{
				if(ya3 && !ya2 && !ya1)
				{
					vec.push_back(temp);
					contPa = 0;
					temp = "";
					ya3 = false;

				}
				if(ya5 && !ya4 && !ya3 && !ya2 && !ya1)
				{
					vec.push_back(temp);
					contPa = 0;
					temp = "";
					ya5 = false;

				}

			}

		}
		contPa = 0;
		for(int j = 0; j < vec.size(); j++)
		{
			for(int k = 0; k < vec[j].size(); k++)
			{
				if(vec[j][k] == '(') contPa++;

				if(j == 0)
				{
					if(vec[j][k] == '*' && contPa == 1) h1 += 2;
					if(vec[j][k] == '*' && contPa == 2) h1 += 1;

				}
				if(j == 1)
				{
					if(vec[j][k] == '*' && contPa == 1) h2 += 8;
					if(vec[j][k] == '*' && contPa == 2) h2 += 4;
					if(vec[j][k] == '*' && contPa == 3) h2 += 2;
					if(vec[j][k] == '*' && contPa == 4) h2 += 1;
				}
				if(j == 2)
				{
					if(vec[j][k] == '*' && contPa == 1) m1 += 4;
					if(vec[j][k] == '*' && contPa == 2) m1 += 2;
					if(vec[j][k] == '*' && contPa == 3) m1 += 1;

				}
				if(j == 3)
				{
					if(vec[j][k] == '*' && contPa == 1) m2 += 8;
					if(vec[j][k] == '*' && contPa == 2) m2 += 4;
					if(vec[j][k] == '*' && contPa == 3) m2 += 2;
					if(vec[j][k] == '*' && contPa == 4) m2 += 1;

				}
				if(j == 4)
				{
					if(vec[j][k] == '*' && contPa == 1) s1 += 4;
					if(vec[j][k] == '*' && contPa == 2) s1 += 2;
					if(vec[j][k] == '*' && contPa == 3) s1 += 1;
				}
				if(j == 5)
				{
					if(vec[j][k] == '*' && contPa == 1) s2 += 8;
					if(vec[j][k] == '*' && contPa == 2) s2 += 4;
					if(vec[j][k] == '*' && contPa == 3) s2 += 2;
					if(vec[j][k] == '*' && contPa == 4) s2 += 1;
				}
			}
			contPa = 0;
		}
		cout << "Case " << i+1 << ": " << h1 << h2 << ":" << m1 << m2 << ":" << s1 << s2 << "\n";
		h1 = h2 = m1 = m2 = s1 = s2 = 0;

	}

	return 0;
}
