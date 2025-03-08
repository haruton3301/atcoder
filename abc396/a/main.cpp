#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n - 2) {
        if (a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
