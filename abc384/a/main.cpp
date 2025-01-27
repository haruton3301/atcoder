#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int n;
    char a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    rep(i, n) {
        if (s[i] == a) {
            cout << a;
        } else {
            cout << b;
        }
    }
    cout << endl;
}
