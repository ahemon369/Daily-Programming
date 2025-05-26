#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int good = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == s[n - i - 1]) {
                good++;
            }
        }

        if (k <= n/2&&abs(k-good) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
