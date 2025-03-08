#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

void dfs(int current, int path, int goal, long long ans, vector<bool> &checked,
         vector<int> &u, vector<int> &v, vector<long long> &w, int &m,
         long long &min) {
    // 終了
    if (path != -1 && checked[path]) {
        return;
    }
    if (current == goal) {
        if (min == -1 || min > ans) {
            min = ans;
        }
        // cout << "Goal" << ans << endl;
        return;
    }

    // checked
    if (path != -1) {
        checked[path] = true;
    }

    // 生やす
    rep(i, m) {
        if (u[i] == current) {
            dfs(v[i], i, goal, ans == -1 ? w[i] : ans ^ (long long)w[i],
                checked, u, v, w, m, min);
        } else if (v[i] == current) {
            dfs(u[i], i, goal, ans == -1 ? w[i] : ans ^ (long long)w[i],
                checked, u, v, w, m, min);
        }
    }

    if (path != -1) {
        checked[path] = false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> u(m), v(m);
    vector<long long> w(m);
    rep(i, m) cin >> u[i] >> v[i] >> w[i];

    vector<bool> checked(m, false);
    long long min = -1;

    dfs(1, -1, n, -1, checked, u, v, w, m, min);

    cout << min << endl;
}
