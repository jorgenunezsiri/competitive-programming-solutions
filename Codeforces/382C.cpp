// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/382/C

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int n, te;
map<int, int> cntDif;
vector<int> vec;
vector<int> result;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> te;
        vec.push_back(te);
    }
    sort(vec.begin(), vec.end());
    if(n == 1)
    {
        cout << "-1" << endl;
        return 0;
    }
    bool allSame = true;
    for(int i = 0; i < vec.size()-1; i++)
    {
        if(vec[i+1] != vec[i])
        {
            allSame = false;
        }
    }
    if(allSame)
    {
        cout << "1" << "\n";
        cout << vec[0] << "\n";
        return 0;
    }
     
    for(int i = 0; i < vec.size()-1; i++)
    {
        if(vec[i+1] == vec[i])
        {
            cout << "0" << "\n";
            return 0;
        }
    }
    if(n == 2)
    {
        int d = vec[1] - vec[0];
        result.push_back((vec[0] - d));
        result.push_back((vec[1] + d));
        bool sePuede = true;
        int t2 = (vec[0] + vec[1])/2;
        vec.push_back(t2);
        sort(vec.begin(), vec.end());
        for(int i = 0; i < 2; i++)
        {
            if((vec[i+1] - vec[i]) != (d/2))
            {
                sePuede = false;
                break;
            }
        }
        if(sePuede)
        {
            result.push_back((vec[0] + vec[2])/2);
            sort(result.begin(), result.end());
            cout << result.size() << "\n";
            for(int i = 0; i < result.size()-1; i++)
            {
                cout << result[i] << " ";
            }
            cout << result[result.size()-1] << "\n";
        }
        else
        {
            cout << "2" << "\n";
            cout << result[0] << " " << result[1] << "\n";
        }

        return 0;
    }

    int maxi = 0;
    int min = 1000000000;
    for(int i = 0; i < vec.size()-1; i++)
    {
        int d = vec[i+1] - vec[i];
        if(d > maxi) maxi = d;
        if(d < min) min = d;
        cntDif[d]++;
    }
    int cnt = 0;
    for (map<int,int>::iterator it=cntDif.begin(); it!=cntDif.end(); ++it)
    {
        if(cntDif[it->first] != 0)
        {
            cnt++;
        }
    }
    if(cnt > 2)
    {
        cout << "0" << "\n";
        return 0;
    }
    else if(cnt == 1)
    {
        int d = vec[1] - vec[0];
        result.push_back((vec[0] - d));
        result.push_back((vec[vec.size()-1] + d));
        cout << result.size() << "\n";
        for(int i = 0; i < result.size()-1; i++)
        {
            cout << result[i] << " ";
        }
        cout << result[result.size()-1] << "\n";
        return 0;
    }
    else if(cnt == 2)
    {
        int temp1 = 0;
        if(cntDif[maxi] > 1)
        {
            cout << "0" << "\n";
            return 0;
        }
        for(int i = 0; i < vec.size()-1; i++)
        {
            if(vec[i+1] - vec[i] == maxi)
            {
                temp1 = (vec[i+1]+vec[i])/2;
                vec.push_back(temp1);
            }
        }
        bool sePuede = true;
        sort(vec.begin(), vec.end());
        for(int i = 0; i < vec.size()-1; i++)
        {
            if((vec[i+1] - vec[i]) != min)
            {
                sePuede = false;
                break;
            }
        }
        if(sePuede)
        {
            result.push_back(temp1);
            sort(result.begin(), result.end());
            cout << result.size() << "\n";
            for(int i = 0; i < result.size()-1; i++)
            {
                cout << result[i] << " ";
            }
            cout << result[result.size()-1] << "\n";
            return 0;
        }
        else
        {
            cout << "0" << "\n";
            return 0;
        }
    }

    return 0;
}
