// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2421

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

typedef struct as
{
    int x;
    int y;
    int r;
    int pos;

}asteroids;

int n, sx, sy;

// distance = sqrt( pow((double)(x2-x1), 2) + pow((double)(y2-y1), 2) )

bool cmp(asteroids a1, asteroids a2)
{
    double d1 = sqrt( pow((double)(a1.x-sx), 2) + pow((double)(a1.y-sy), 2) ) - a1.r;
    double d2 = sqrt( pow((double)(a2.x-sx), 2) + pow((double)(a2.y-sy), 2) ) - a2.r;

    if(d1 < d2)
        return true;
    return false;

}

int main()
{
    while(true)
    {
        cin >> n;
        if(n == 0) return 0;
        cin >> sx >> sy;
        asteroids input[1002];
        for(int i = 0; i < n; i++)
        {
            input[i].pos = i+1;
            cin >> input[i].x >> input[i].y >> input[i].r;
        }
        sort(input, input+n, cmp);
        cout << input[0].pos << "\n";
    }
}
