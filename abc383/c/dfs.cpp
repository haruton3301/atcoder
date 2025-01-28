#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

void dfs(int idx, int x, int y, vector<string> &s, int h, int w, int d,
         vector<vector<bool>> &checked, set<pair<int, int>> &humidified) {
    if (x < 0 || y < 0 || x >= h || y >= w)
        return;
    if (idx > d)
        return;
    if (s[x][y] == '#')
        return;
    if (checked[x][y])
        return;

    humidified.insert({x, y});
    checked[x][y] = true;

    dfs(idx + 1, x + 1, y, s, h, w, d, checked, humidified);
    dfs(idx + 1, x - 1, y, s, h, w, d, checked, humidified);
    dfs(idx + 1, x, y + 1, s, h, w, d, checked, humidified);
    dfs(idx + 1, x, y - 1, s, h, w, d, checked, humidified);

    checked[x][y] = false;
}

int main() {
    int h, w, d;
    cin >> h >> w >> d;

    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vector<vector<bool>> checked(h, vector<bool>(w, false));
    set<pair<int, int>> humidified;

    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == 'H') {
                dfs(0, i, j, s, h, w, d, checked, humidified);
            }
        }
    }

    cout << humidified.size() << endl;
}
