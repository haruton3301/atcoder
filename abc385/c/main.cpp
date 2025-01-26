#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    int ans = 0;
    for (int w = 1; w <= n; w++) {
        rep(si, w) {
            vector<int> a;
            for (int i = si; i < n; i += w) {
                a.push_back(h[i]);
            }

            int val = -1, len = 0;
            for (int x : a) {
                if (val == x)
                    len++;
                else
                    val = x, len = 1;
                ans = max(ans, len);
            }
        }
    }

    cout << ans << endl;
}
