#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    int prev_t = 0;
    int v_sum = 0;
    rep(i, n) {
        int t, v;
        cin >> t >> v;
        if (i != 0) {
            v_sum -= t - prev_t;
        }
        v_sum = max(0, v_sum);
        v_sum += v;
        prev_t = t;
    }

    cout << v_sum << endl;
}
