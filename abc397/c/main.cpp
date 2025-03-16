#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;
    set<int> set_a;
    map<int, int> map_a;
    set<int> set_b;
    map<int, int> map_b;

    map_a[a[0]] = 1;
    set_a.insert(a[0]);

    for (int i = 1; i < n; i++) {
        if (map_b.find(a[i]) == map_b.end()) {
            map_b[a[i]]++;
        } else {
            map_b[a[i]] = 1;
            set_b.insert(a[i]);
        }
    }

    ans = max(ans, (int)(set_a.size() + set_b.size()));

    cout << ans << endl;

    for (int i = 1; i < n; i++) {
        if (map_a[a[i]] == 1) {
            set_a.erase(a[i]);
            map_a[a[i]]--;
        } else if (map_a[a[i - 1]] != 0) {
            map_a[a[i]]--;
        }

        if (map_b.find(a[i]) == map_b.end()) {
            map_b[a[i]]++;
        } else if (map_b[a[i]] != 0) {
            map_b[a[i]]++;
            set_b.insert(a[i]);
        }

        ans = max(ans, (int)(set_a.size() + set_b.size()));
    }

    cout << ans << endl;
}