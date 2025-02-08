#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    vector<int> ans(n);
    rep(i, n) { ans[q[i] - 1] = q[p[i] - 1]; }

    rep(i, n) cout << ans[i] << " ";
}
