#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    while (true) {

        bool isRemoved = false;
        while (i < s.size() - 1) {
            if ((s[i] == '(' && s[i + 1] == ')') ||
                (s[i] == '<' && s[i + 1] == '>') ||
                (s[i] == '[' && s[i + 1] == ']')) {

                s = s.substr(0, i) + s.substr(i + 2, s.size() - i);
                isRemoved = true;
                i -= 1;
                if (i < 0)
                    i = 0;
                break;
            } else {
                i++;
            }

            if (isRemoved) {
                break;
            }
        }

        if (s.size() == 0) {
            break;
        }

        if (!isRemoved) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
