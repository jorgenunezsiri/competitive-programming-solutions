// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=1706

#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool encontrado = false;
vector<int> vec;
int n, k, temp, m;
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		for(int j = 0; j < k; j++)
		{
			cin >> temp;
			vec.push_back(temp);
		}
		m = k;
		map<int, int> iD;
		while(1)
		{
			map<int, int>::iterator it;
			encontrado = true;
			for(int j = 0; j < k; j++)
			{
				it = iD.find(vec[j]%m);
				if(it == iD.end())
				{
					iD.insert(pair<int, int>(vec[j]%m, 0));
				}
				else
				{
					encontrado = false;
					break;
				}
			}

			if(encontrado == true) break;
      iD.clear();
      m++;
		}

		cout << m << "\n";

		vec.clear();
	}

	return 0;
}
