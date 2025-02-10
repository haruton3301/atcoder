#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    vector<int> a(3);
    rep(i, 3) cin >> a[i];

    if (a[0] * a[1] == a[2] || a[0] * a[2] == a[1] || a[1] * a[2] == a[0]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
