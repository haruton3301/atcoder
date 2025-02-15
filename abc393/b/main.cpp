#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size() - 2; i++) {
        for (int j = 1; j <= (s.size() - i) / 2; j++) {
            if (s[i] == 'A' && s[i + j] == 'B' && s[i + j * 2] == 'C') {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
