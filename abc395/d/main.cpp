#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> hato(n);
    rep(i, n) hato[i] = i;

    vector<unordered_set<int>> su(n);
    rep(i, n) su[i].insert(i);

    rep(i, q) {
        int ope, a, b;
        cin >> ope >> a;

        if (ope == 1) {
            cin >> b;
            su[hato[a - 1]].erase(a - 1);

            hato[a - 1] = b - 1;
            su[b - 1].insert(a - 1);
        } else if (ope == 2) {
            cin >> b;

            for (auto s : su[a - 1]) {
                hato[s] = b - 1;
            }
            for (auto s : su[b - 1]) {
                hato[s] = a - 1;
            }

            unordered_set<int> tmp;
            tmp = su[a - 1];
            su[a - 1] = su[b - 1];
            su[b - 1] = tmp;
        } else {
            cout << hato[a - 1] + 1 << endl;
        }
    }
}
