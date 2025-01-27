#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using A = vector<pair<string, int>>;

int main() {
    const int n = 5;

    string label = "ABCDE";
    vector<int> s(n);
    rep(i, n) cin >> s[i];

    vector<pair<string, int>> ans;

    for (int i = 0; i < (1 << 5); i++) {
        int sum = 0;
        string label_sum = "";
        rep(j, n) {
            if (i & (1 << j)) {
                sum += s[j];
                label_sum += label[j];
            }
        }
        ans.push_back({label_sum, sum});
    }

    sort(ans.begin(), ans.end(),
         [](pair<string, int> &a, pair<string, int> &b) {
             if (a.second != b.second)
                 return a.second > b.second;
             else
                 return a.first < b.first;
         });

    rep(i, ans.size()) cout << ans[i].first << endl;
}
