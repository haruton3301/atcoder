#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> a(h);
    rep(i, h) cin >> a[i];

    int min_h = h, min_w = w, max_h = 0, max_w = 0;
    rep(i, h) {
        rep(j, w) {
            if (a[i][j] == '#') {
                min_h = min(min_h, i);
                min_w = min(min_w, j);
                max_h = max(max_h, i);
                max_w = max(max_w, j);
            }
        }
    }

    for (int i = min_h; i <= max_h; i++) {
        for (int j = min_w; j <= max_w; j++) {
            if (a[i][j] == '.') {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}
