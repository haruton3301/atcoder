#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    for (int i = 2; i < n; i++) {
        if (a[i - 1] * a[i - 1] != a[i - 2] * a[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}
