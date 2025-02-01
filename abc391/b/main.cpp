#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<string> t(m);
    rep(i, m) cin >> t[i];

    for (int i = 0; i < n - m / 2; i++) {
        for (int j = 0; j < n - m / 2; j++) {
            bool is_match = true;
            for (int k = 0; k < m; k++) {
                for (int l = 0; l < m; l++) {
                    if (t[k][l] != s[i + k][j + l]) {
                        is_match = false;
                    }
                }
                if (!is_match)
                    break;
            }
            if (is_match) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
}
