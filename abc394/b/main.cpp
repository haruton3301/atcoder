#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end(),
         [](string &a, string &b) { return a.size() < b.size(); });

    rep(i, n) cout << a[i];
}
