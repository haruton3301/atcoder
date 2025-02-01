#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> s(n, 1);
    vector<int> h(n);
    rep(i, n) h[i] = i;

    int cnt = 0;
    rep(i, q) {
        int ope;
        cin >> ope;

        if (ope == 1) {
            int a, b;
            cin >> a >> b;

            int before = s[h[a - 1]];
            s[h[a - 1]]--;
            if (before > 1 && s[h[a - 1]] <= 1)
                cnt--;
            h[a - 1] = b - 1;
            before = s[h[a - 1]];
            s[h[a - 1]]++;
            if (before <= 1 && s[h[a - 1]] > 1)
                cnt++;
        } else {
            cout << cnt << endl;
        }
    }
}
