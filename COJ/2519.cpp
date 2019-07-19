// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2519

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <stack>
#include <queue>
#include <functional>
#include <sstream>

using namespace std;
int t, num1, num2, num3, num4, num5, num6;
string cadena;
int resultado;

stack<int> st;
queue<int> qst;
priority_queue<int, vector<int>, greater<int> > pst;

int sttoi(string s) {
    stringstream ss;
    ss << s;
    int i;
    ss >> i;
    return i;
}

int main()
{
    cin >> t;
    getline(cin, cadena);

    while (t-- > 0)
    {
        stack<int> st;
        queue<int> qst;
        priority_queue<int, vector<int>, greater<int> > pst;
        getline(cin, cadena);
        stringstream ss;
        ss << cadena;
        string token;
        while (ss >> token) {
            if(token == "+" || token == "-" || token == "*")
            {
                num1 = st.top();
                num3 = qst.front();
                num5 = pst.top();
                pst.pop();
                qst.pop();
                st.pop();
                num2 = st.top();
                num4 = qst.front();
                num6 = pst.top();
                qst.pop();
                st.pop();
                pst.pop();
            }
            if (token == "+")
            {
                resultado = num1 + num2;
                st.push(resultado);
                resultado = num3 + num4;
                qst.push(resultado);
                resultado = num5 + num6;
                pst.push(resultado);
            } else if (token == "-")
            {
                resultado = num2 - num1;
                st.push(resultado);
                resultado = num4 - num3;
                qst.push(resultado);
                resultado = num6 - num5;
                pst.push(resultado);
            } else if (token == "*")
            {
                resultado = num1 * num2;
                st.push(resultado);
                resultado = num3 * num4;
                qst.push(resultado);
                resultado = num5 * num6;
                pst.push(resultado);
            } else {
                int n = sttoi(token);
                st.push(n);
                qst.push(n);
                pst.push(n);
            }
        }
        cout << st.top() << " " << qst.front() << " " << pst.top() << "\n";
    }
    return 0;
}
