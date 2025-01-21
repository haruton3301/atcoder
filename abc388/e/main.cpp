#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll b = n / 2;
    ll j = b;
    ll ans = 0;
    for (ll i = 0; i < b; i++) {
        while (j < n && a[i] * 2 > a[j])
            j++;
        if (j == n)
            break;
        ans++;
        j++;
    }

    cout << ans << endl;
}
