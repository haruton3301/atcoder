#include <bits/stdc++.h>
using namespace std;
#define rep(i, n)                                                              \
    for (int i = 0; i < (n); i++)                                              \
        ;
using ll = long long;

void solve(int idx, int x, int y, int direction, vector<vector<bool>> &checked,
           int h, int w, vector<vector<char>> &s, int &min_cnt) {
    // 範囲ガード
    if (x < 0 || y < 0 || h <= x || w <= y || s[x][y] == '#' || checked[x][y]) {
        return;
    }

    // ゴールガード
    if (s[x][y] == 'G') {
        if (idx < min_cnt) {
            min_cnt = idx;
        }
        return;
    }

    checked[x][y] = true;

    switch (direction) {
    case 1: // 縦
        solve(idx + 1, x - 1, y, 2, checked, h, w, s, min_cnt);
        solve(idx + 1, x + 1, y, 2, checked, h, w, s, min_cnt);
        break;
    case 2: // 横
        solve(idx + 1, x, y - 1, 1, checked, h, w, s, min_cnt);
        solve(idx + 1, x, y + 1, 1, checked, h, w, s, min_cnt);
        break;
    default: // 初期
        solve(idx + 1, x - 1, y, 2, checked, h, w, s, min_cnt);
        solve(idx + 1, x + 1, y, 2, checked, h, w, s, min_cnt);
        solve(idx + 1, x, y - 1, 1, checked, h, w, s, min_cnt);
        solve(idx + 1, x, y + 1, 1, checked, h, w, s, min_cnt);
    }

    checked[x][y] = false;
}

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> s(h, vector<char>(w));

    rep(i, h) {
        string l;
        cin >> l;
        std::vector<char> v(l.begin(), l.end());
        s[i] = v;
    }

    int start_x, start_y;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == 'S') {
                start_x = i;
                start_y = j;
            }
        }
    }

    int huge_num = 9999999;
    int min_cnt = huge_num;
    vector<vector<bool>> checked(h, vector<bool>(w, false));
    solve(0, start_x, start_y, 0, checked, h, w, s, min_cnt);

    if (min_cnt == huge_num) {
        cout << -1 << endl;
    } else {
        cout << min_cnt << endl;
    }
}
