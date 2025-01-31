#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    string s;
    cin >> s;

    int cnt = 0;
    rep(i, n) if (s[i] == '.') cnt++;

    int ans = cnt + d;
    cout << ans << endl;
}
