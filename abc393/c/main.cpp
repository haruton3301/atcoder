#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    unordered_set<string> h;

    rep(i, m) {
        int u, v;
        cin >> u >> v;

        int a = min(u, v);
        int b = max(u, v);
        string s = to_string(a) + "," + to_string(b);

        if (!h.insert(s).second || u == v)
            cnt++;
    }

    cout << cnt << endl;
}
