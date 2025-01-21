#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ll N;
    cin >> N;

    vector<ll> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    ll cnt = 0;

    for (ll i = 0; i < N; i++) {
        auto it = upper_bound(A.begin(), A.begin() + i, A[i] / 2);
        cnt += (it - A.begin());
    }

    cout << cnt << endl;
}
