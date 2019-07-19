// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2014

#include <iostream>
#include <vector>
#include <cstring> //
#include <string> //

using namespace std;

string inicial,final;
int nums,n;

int main()
{
	cin >> n;
	for(int j = 0; j < n; j++)
	{
		cin >> inicial >> nums;
		int i = 0;
		for(; i< inicial.length() ;i++)
		{
			if(inicial[i] == '1' && nums!=0)
			{
				nums--;
				final += '0';
			}
			else if(nums == 0)
				final+=inicial[i];
			else
				final+='0';
		}
		i--;
		if(nums != 0)
		{
			for(;nums!=0;i--)
			{
				if(inicial[i] == final[i] && inicial[i] == '0')
				{
					final[i] = '1';
					nums--;
				}
				else if(inicial[i] == final[i] && inicial[i] == '1')
				{
					final[i] = '0';
					nums--;
				}
			}
		}
		cout << "Case #" << j+1 << ": " << final << endl;
		final = "";
	}

	return 0;
}
