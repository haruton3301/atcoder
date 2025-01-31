#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[n - i - 1] == '@' && cnt < d) {
            s[n - i - 1] = '.';
            cnt++;
        }
    }

    rep(i, n) cout << s[i];
    cout << endl;
}
