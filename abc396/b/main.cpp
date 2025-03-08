#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(100, 0);

    rep(i, n) {
        int ope;
        cin >> ope;

        switch (ope) {
        case 1:
            int x;
            cin >> x;
            a.push_back(x);
            break;
        case 2:
            cout << a.back() << endl;
            a.pop_back();
            break;
        }
    }
}
