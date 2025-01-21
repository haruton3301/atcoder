#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> T(N), L(N);

    for (int i = 0; i < N; i++) {
        cin >> T[i] >> L[i];
    }

    for (int i = 0; i < D; i++) {
        int max_weight = -1;

        for (int j = 0; j < N; j++) {
            int weight = T[j] * (L[j] + i + 1);
            if (weight > max_weight) {
                max_weight = weight;
            }
        }

        cout << max_weight << endl;
    }
}
