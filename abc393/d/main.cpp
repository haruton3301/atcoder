#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    queue<pair<int, string>> que;
    que.push({0, s});

    int l = 0;
    rep(i, n) if (s[i] == '1') l++;

    unordered_set<string> h;

    while (!que.empty()) {
        pair<int, string> v = que.front();
        que.pop();

        bool isEnd = false;
        bool isOne = false;
        int endCnt = 0;
        rep(i, n) {
            if (v.second[i] == '1') {
                if (isOne) {
                    endCnt++;
                } else {
                    isOne = true;
                    endCnt++;
                }
            } else if (isOne) {
                break;
            }

            if (endCnt == l) {
                isEnd = true;
                break;
            }
        }

        if (isEnd) {
            cout << v.first << endl;
            break;
        }

        rep(i, n - 1) {
            string sc = v.second;
            char tmp;
            tmp = sc[i];
            sc[i] = sc[i + 1];
            sc[i + 1] = tmp;

            if (h.insert(sc).second) {
                que.push({v.first + 1, sc});
            }
        }
    }
}
