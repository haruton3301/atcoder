#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int h, w, d;
    cin >> h >> w >> d;

    vector<string> s(h);
    rep(i, h) cin >> s[i];

    set<pair<int, int>> humidified;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    queue<tuple<int, int, int>> q;

    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == 'H') {
                q.push({i, j, 0});
                humidified.insert({i, j});
            }
        }
    }

    while (!q.empty()) {
        auto [x, y, dist] = q.front();
        q.pop();

        if (dist >= d)
            continue;

        for (auto [dx, dy] : directions) {
            int nx = x + dx;
            int ny = y + dy;

            if (nx < 0 || ny < 0 || nx >= h || ny >= w)
                continue;
            if (s[nx][ny] == '#')
                continue;
            if (humidified.count({nx, ny}))
                continue;

            humidified.insert({nx, ny});
            q.push({nx, ny, dist + 1});
        }
    }

    cout << humidified.size() << endl;
}
