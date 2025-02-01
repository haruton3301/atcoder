#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;

int main() {
    string d;
    cin >> d;

    map<string, string> m = {
        {"N", "S"},   {"E", "W"},   {"W", "E"},   {"S", "N"},
        {"NE", "SW"}, {"NW", "SE"}, {"SE", "NW"}, {"SW", "NE"},
    };

    cout << m[d] << endl;
}
