#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    rep(i, m) cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> ans();
    int j = 0;
    rep(i, n) {
        if (a[j] == i + 1) {
            j++;
        } else {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << endl;
    rep(i, ans.size()) cout << ans[i] << " ";
}
