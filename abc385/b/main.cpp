#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;

    vector<string> s(h);
    rep(i, h) cin >> s[i];

    string t;
    cin >> t;

    set<pair<int, int>> v;
    rep(i, t.size()) {
        int nx = x, ny = y;
        switch (t[i]) {
        case 'U':
            nx--;
            break;
        case 'D':
            nx++;
            break;
        case 'L':
            ny--;
            break;
        case 'R':
            ny++;
            break;
        }

        if (s[nx - 1][ny - 1] != '#') {
            x = nx;
            y = ny;

            if (s[nx - 1][ny - 1] == '@') {
                v.insert({x, y});
            }
        }
    }

    cout << x << " " << y << " " << v.size();
}
