// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2977

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int t;
string cad;
bool ma[100];
bool occupied[100];
int main()
{
	ios_base::sync_with_stdio(0);
	while(cin >> t && t)
	{
		int ans = 0;
		memset(ma,false,sizeof ma);
		memset(occupied,false,sizeof occupied);
		cin >> cad;
		for(int i = 0; i < cad.size(); i++)
		{
			int ind = (int)(cad[i]-'A');
			if(!ma[(int)(cad[i]-'A')])
			{
				if(t > 0) {t--; occupied[ind] = true;}
				else if(t == 0) ans++;
				ma[ind] = true;
			}
			else if(ma[ind] && occupied[ind]) t++;
		}
		if(ans == 0) cout << "All customers tanned successfully.\n";
		else cout << ans << " customer(s) walked away.\n";
	}
	return 0;
}
