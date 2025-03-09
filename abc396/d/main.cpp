#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

void dfs(int current, int goal, ll x, vector<bool> &checked, vector<int> &u,
         vector<int> &v, vector<ll> &w, vector<vector<pair<int, int>>> &list,
         int &m, ll &ans) {
    // 終了
    if (checked[current]) {
        return;
    }
    if (current == goal) {
        ans = min(ans, x);
        return;
    }

    // checked
    checked[current] = true;

    // 生やす
    for (auto [to, index] : list[current]) {
        dfs(to, goal, x ^ (long long)w[index], checked, u, v, w, list, m, ans);
    }

    // checkedリセット
    checked[current] = false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> u(m), v(m);
    vector<ll> w(m);
    vector<vector<pair<int, int>>> list(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b >> w[i];
        a--;
        b--;
        u[i] = a;
        v[i] = b;

        list[a].push_back({b, i});
        list[b].push_back({a, i});
    }

    vector<bool> checked(n, false);
    ll ans = 2e18;

    dfs(0, n - 1, 0, checked, u, v, w, list, m, ans);

    cout << ans << endl;
}
