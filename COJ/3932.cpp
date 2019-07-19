// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=3932

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string m;

    int digits[10];

    cin >> n;
    while (n--) {
        cin >> m;

        bool neg = false;
        bool onlyZeroes = true;
        for (int i = 0; i < 10; i++) {
            digits[i] = 0;
        }

        for (int i = 0; i < m.size(); i++) {
            if (i == 0 && m[i] == '-') {
                neg = true;
                continue;
            }

            if (m[i] != '0' || neg == true && i > 0 && m[i] != '0') {
                onlyZeroes = false;
            }

            digits[m[i] - '0']++;
        }

        if (onlyZeroes) {
            cout << "0\n";
        } else if (neg) {
            cout << "-";
            for (int i = 9; i >= 0; i--) {
                while (digits[i]--) {
                    cout << i;
                }
            }
            cout << "\n";
        } else {
            for (int i = 1; i < 10; i++) {
                if (digits[i] > 0) {
                    cout << i;
                    digits[i]--;
                    break;
                }
            }
            while (digits[0]--) {
                cout << 0;
            }
            while (digits[1]--) {
                cout << 1;
            }
            for (int i = 2; i < 10; i++) {
                while (digits[i]--) {
                    cout << i;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
