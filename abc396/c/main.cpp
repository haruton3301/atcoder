#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> b(n);
    rep(i, n) cin >> b[i];

    vector<long long> w(m);
    rep(i, m) cin >> w[i];

    sort(b.begin(), b.end(), greater());
    sort(w.begin(), w.end(), greater());

    long long sum = 0;
    int i = 0, j = 0;
    while (i < n) {
        if (b[i] < 0) {
            break;
        }
        sum += b[i];
        i++;
    }

    while (j < m) {
        if (w[j] < 0) {
            break;
        }
        if (j >= i) {
            if (i < n) {
                if (b[i] + w[j] >= 0) {
                    sum += w[j] + b[i];
                    i++;
                } else {
                    break;
                }
            } else {
                break;
            }
        } else {
            sum += w[j];
        }

        j++;
    }

    cout << sum << endl;
}
