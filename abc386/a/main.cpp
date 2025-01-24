#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool solve() {
    vector<int> a(4);
    rep(i, 4) cin >> a[i];
    sort(a.begin(), a.end());
    if (a[0] == a[3])
        return false;
    if (a[0] == a[1] && a[1] == a[2])
        return true;
    if (a[0] == a[1] && a[2] == a[3])
        return true;
    if (a[1] == a[2] && a[2] == a[3])
        return true;
    return false;
}

int main() {
    if (solve())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
