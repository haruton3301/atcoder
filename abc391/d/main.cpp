// TLE
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

struct Block {
    int idx, x, y;
    bool is_removed;
};

int main() {
    int n, w;
    cin >> n >> w;

    vector<Block> b(n);
    rep(i, n) {
        b[i].idx = i;
        b[i].is_removed = false;
        cin >> b[i].x >> b[i].y;
    }

    sort(b.begin(), b.end(), [](const struct Block &a, const struct Block &b) {
        return a.y < b.y;
    });

    vector<int> r(n, -1);
    int t = 0;

    while (true) {
        bool is_changed = false;
        int cnt = 0;
        int prev_y = 0;
        unordered_set<int> exist_w, prev_exist_w;

        rep(i, n) {
            if (b[i].is_removed)
                continue;

            if (b[i].y == 1)
                cnt++;
        }

        if (cnt == w) {
            rep(i, n) {
                if (b[i].y == 1) {
                    r[b[i].idx] = t;
                    b[i].is_removed = true;
                }
            }
        }

        rep(i, n) {
            if (b[i].is_removed)
                continue;

            if (prev_y < b[i].y) {
                prev_exist_w = exist_w;
                exist_w.clear();
                prev_y++;
            }

            if (b[i].y > 1 && !prev_exist_w.count(b[i].x)) {
                is_changed = true;
                b[i].y--;
            } else {
                exist_w.insert(b[i].x);
            }
        }

        if (!is_changed) {
            break;
        }

        t++;
    }

    int q;
    cin >> q;
    rep(i, q) {
        int t, a;
        cin >> t >> a;
        if (r[a - 1] == -1 || r[a - 1] >= t) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
