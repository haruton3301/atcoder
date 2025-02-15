#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    string s;
    cin >> s;
    bool isA = s == "sick";
    cin >> s;
    bool isB = s == "sick";

    if (isA && isB) {
        cout << 1 << endl;
    } else if (isA && !isB) {
        cout << 2 << endl;
    } else if (!isA && isB) {
        cout << 3 << endl;
    } else if (!isA && !isB) {
        cout << 4 << endl;
    }
}
