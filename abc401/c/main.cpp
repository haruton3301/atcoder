#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    int pre1 = 1, pre2 = 1;
    for (int i = k; i < n + 1; i++) {
        int tmp = 0;
        if (i == k) {
            tmp = k;
        } else if (i < k) {
            tmp = 1;
        } else {
            tmp = pre1 + pre2;
        }
        pre2 = pre1;
        pre1 = tmp;
        cout << tmp << endl;
    }
    cout << pre1 % 1000000000 << endl;
}
