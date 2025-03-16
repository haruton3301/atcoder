#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main() {
    float x;
    cin >> x;

    if (x >= 38.0) {
        cout << 1 << endl;
    } else if (x >= 37.5) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
}
