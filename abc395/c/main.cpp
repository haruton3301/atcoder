#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<pair<int, int>> p(n);
    rep(i, n) p[i] = {a[i], i};

    sort(p.begin(), p.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first) {
            return a.second < b.second;
        } else {
            return a.first < b.first;
        }
    });

    int inf = 9999999;
    int min_val = inf;
    rep(i, n - 1) {
        if (p[i].first == p[i + 1].first) {
            int d = p[i + 1].second - p[i].second + 1;
            if (d < min_val) {
                min_val = d;
            }
        }
    }

    if (min_val == inf) {
        cout << -1 << endl;
    } else {
        cout << min_val << endl;
    }
}
