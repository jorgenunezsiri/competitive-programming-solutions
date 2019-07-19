// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2963

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, tmp, cnt, cnt2, miniEven, miniOdd;
vector<int> v, vTmp, vTmp2;

bool check(vector<int> v, bool evenOdd)
{
    if(evenOdd)
    {
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] % 2 != 0) return false;
        }
        return true;
    }
    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] % 2 == 0) return false;
        }
        return true;
    }
}
int main()
{
    cin >> n;
    while(n--)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    if(v.size() == 1)
    {
        if(v[0] % 2 == 0) cout << "1\n" << "0\n";
        else cout << "0\n" << "1\n";
    }
    else
    {
        cnt = 1;
        cnt2 = 0;
        vTmp = v;
        vTmp2 = v;

        vTmp[0]++;
        vTmp[1]++;
        for(int i = 1; i < vTmp.size(); i++)
        {
            if(vTmp[i-1] % 2 == 0)
            {
                cnt++;
                vTmp[i-1]++;
                vTmp[i]++;
                if((i+1) <= vTmp.size()-1) vTmp[i+1]++;
            }
            if(vTmp2[i-1] % 2 == 0)
            {
                cnt2++;
                vTmp2[i-1]++;
                vTmp2[i]++;
                if((i+1) <= vTmp2.size()-1) vTmp2[i+1]++;
            }
        }
        miniOdd = 0;
        if(check(vTmp, false))
        {
            miniOdd = cnt;
        }
        if(check(vTmp2, false))
        {
            if(miniOdd != 0)
            {
                miniOdd = min(miniOdd, cnt2);
                cout << miniOdd << "\n";
            }
            else cout << cnt2 << "\n";
        }
        else
        {
            if(miniOdd != 0) cout << miniOdd << "\n";
            else cout << "-1" << "\n";
        }

        cnt = 1;
        cnt2 = 0;
        vTmp = v;
        vTmp2 = v;

        vTmp[0]++;
        vTmp[1]++;
        for(int i = 1; i < vTmp.size(); i++)
        {
            if(vTmp[i-1] % 2 != 0)
            {
                cnt++;
                vTmp[i-1]++;
                vTmp[i]++;
                if((i+1) <= vTmp.size()-1) vTmp[i+1]++;
            }
            if(vTmp2[i-1] % 2 != 0)
            {
                cnt2++;
                vTmp2[i-1]++;
                vTmp2[i]++;
                if((i+1) <= vTmp2.size()-1) vTmp2[i+1]++;
            }
        }
        miniEven = 0;
        if(check(vTmp, true))
        {
            miniEven = cnt;
        }
        if(check(vTmp2, true))
        {
            if(miniEven != 0)
            {
                miniEven = min(miniEven, cnt2);
                cout << miniEven << "\n";
            }
            else cout << cnt2 << "\n";
        }
        else
        {
            if(miniEven != 0) cout << miniEven << "\n";
            else cout << "-1" << "\n";
        }
    }

    return 0;
}
