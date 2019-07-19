// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/535/A

#include <iostream>
#include <string>
using namespace std;

string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string specials[] = {"eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = { "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
int main()
{
    string num;
    cin >> num;
    if(num.size() == 1)
    {
        cout << nums[num[0]-'0'] << endl;
    }
    else
    {
        if(num[0] == '1' && ((num[1]-'0') >= 1 && (num[1]-'0') <= 9))
        {
            cout << specials[num[1]-'1'] << endl;
        }
        else if(( (num[0]-'0') >= 1 && (num[0]-'0') <= 9) && num[1] == '0') cout << tens[(num[0]-'0')-1] << endl;
        else
        {
            cout << tens[(num[0]-'0')-1] << "-" << nums[num[1]-'0'] << endl;
        }

    }
    return 0;
}
