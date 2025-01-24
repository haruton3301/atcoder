#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    int zero_cnt = 0;
    bool is_before_zero = false;
    for (auto c : s) {
        if (c == '0') {
            is_before_zero = true;
            zero_cnt++;
        } else {
            if (is_before_zero) {
                cnt += zero_cnt / 2;
                if (zero_cnt % 2 != 0) {
                    cnt++;
                }

                is_before_zero = false;
                zero_cnt = 0;
            }
            cnt++;
        }
    }

    if (is_before_zero) {
        cnt += zero_cnt / 2;
        if (zero_cnt % 2 != 0) {
            cnt++;
        }
    }

    cout << cnt << endl;
}
