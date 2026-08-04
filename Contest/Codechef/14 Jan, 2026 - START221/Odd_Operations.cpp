#include<iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        bool hasOdd = false;
        for (char c : s) {
            if ((c - '0') % 2 == 1) {
                hasOdd = true;
                break;
            }
        }

        if (!hasOdd) {
            cout << -1 << '\n';
            continue;
        }

        int n = s.size();
        if ((s[n - 1] - '0') % 2 == 1) {
            // Already odd
            cout << 0 << '\n';
        } else if ((s[0] - '0') % 2 == 1) {
            // First digit is odd
            cout << 1 << '\n';
        } else {
            // Any other odd digit
            cout << 2 << '\n';
        }
    }

    return 0;
}