#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int len = s.size();
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            ans++;
            len++;
        }
    }

    if (s[0] == 'o') {
        ans++;
        len++;
    }

    if (len % 2 != 0) {
        ans++;
    }

    cout << ans << endl;
}
