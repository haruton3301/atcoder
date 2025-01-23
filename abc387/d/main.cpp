#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)                                                              \
    for (int i = 0; i < (n); i++)                                              \
        ;
using ll = long long;
using P = pair<int, int>;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
        cin >> s[i];

    const int INF = 10000000;
    int ans = INF;
    for (int par = 0; par < 2; par++) {
        vector dist(h, vector<int>(w, INF));
        queue<P> q;
        auto push = [&](int i, int j, int d) {
            if (i < 0 || j < 0 || i >= h || j >= w || s[i][j] == '#' ||
                dist[i][j] != INF)
                return;
            dist[i][j] = d;
            q.emplace(i, j);
        };

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (s[i][j] == 'S')
                    push(i, j, 0);
            }
        }
        while (q.size()) {
            auto [i, j] = q.front();
            q.pop();
            int d = dist[i][j];
            if (s[i][j] == 'G')
                ans = min(ans, d);
            if ((i + j) % 2 == par) {
                push(i + 1, j, d + 1);
                push(i - 1, j, d + 1);
            } else {
                push(i, j + 1, d + 1);
                push(i, j - 1, d + 1);
            }
        }
    }

    if (ans == INF)
        ans = -1;
    cout << ans << endl;
}
