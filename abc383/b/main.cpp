#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int calc_humidified_num(int x, int y, int x2, int y2, vector<string> &s, int h,
                        int w, int d) {
    int cnt = 0;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] != '.')
                continue;
            int add_num = 0;
            if (abs(x - i) + abs(y - j) <= d) {
                add_num++;
            }
            if (abs(x2 - i) + abs(y2 - j) <= d) {
                add_num++;
            }
            if (add_num == 2) {
                add_num = 1;
            }
            cnt += add_num;
        }
    }

    return cnt;
}

int main() {
    int h, w, d;
    cin >> h >> w >> d;

    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int max_num = -1;
    rep(i, h) {
        rep(j, w) {
            rep(k, h) {
                rep(l, w) {
                    if (s[i][j] == '.' && s[k][l] == '.') {
                        max_num = max(max_num, calc_humidified_num(i, j, k, l,
                                                                   s, h, w, d));
                    }
                }
            }
        }
    }

    cout << max_num << endl;
}
