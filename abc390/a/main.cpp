#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(5);

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 4; i++) {
        swap(a[i], a[i + 1]);

        bool is_sorted = true;
        for (int j = 0; j < 4; j++) {
            if (a[j] > a[j + 1]) {
                is_sorted = false;
            }
        }

        if (is_sorted) {
            cout << "Yes" << endl;
            return 0;
        }

        swap(a[i], a[i + 1]);
    }

    cout << "No" << endl;
}
