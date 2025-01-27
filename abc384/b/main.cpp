#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    rep(i, n) {
        int d, a;
        cin >> d >> a;

        int left, right;
        if (d == 1) {
            left = 1600;
            right = 2799;
        } else {
            left = 1200;
            right = 2399;
        }

        if (left <= r && r <= right) {
            r += a;
        }
    }

    cout << r << endl;
}
