#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int s = 0;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        a[i] += s;
        int num = min(a[i], n - 1 - i);
        a[i] -= num;
        s++;
        r[i + num]++;

        s -= r[i];
    }

    for (int i = 0; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
}
