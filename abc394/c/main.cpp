#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    while (i < s.size() - 1) {
        if (s[i] == 'W' && s[i + 1] == 'A') {
            s[i] = 'A';
            s[i + 1] = 'C';

            int j = i - 1;
            while (j >= 0) {
                if (s[j] == 'W') {
                    s[j] = 'A';
                    s[j + 1] = 'C';
                } else {
                    break;
                }
                j--;
            }
        }
        i++;
    }

    cout << s;
}
