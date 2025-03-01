#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> a(n);

    rep(i, n) {
        string buf = "";
        rep(j, n) { buf += "?"; }
        a[i] = buf;
    }

    rep(i, n / 2 + 1) {
        for (int j = i; j < n - i; j++) {
            for (int k = i; k < n - i; k++) {
                if (i % 2 == 0) {
                    a[j][k] = '#';
                } else {
                    a[j][k] = '.';
                }
            }
        }
    }

    rep(i, n) {
        string buf = "";
        rep(j, n) { cout << a[i][j]; }
        cout << endl;
    }
}
