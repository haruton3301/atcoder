#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    bool isAuthorized = false;
    rep(i, n) {
        string s;
        cin >> s;

        if (s == "login") {
            isAuthorized = true;
        } else if (s == "logout") {
            isAuthorized = false;
        } else if (s == "public") {
        } else if (s == "private") {
            if (!isAuthorized) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
