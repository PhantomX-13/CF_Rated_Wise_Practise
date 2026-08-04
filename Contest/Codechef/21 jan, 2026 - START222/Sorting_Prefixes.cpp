#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i=0; i<n; i++) cin >> A[i];

        int cost = 0;
        int currentMax = 0;

        // Go from right to left
        for(int i=n-1; i>=0; i--) {
            if(A[i] != i+1) {
                // Pay for this prefix (prefix length i+1)
                cost += max(A[i], currentMax);
                currentMax = max(currentMax, A[i]);
            }
        }

        cout << cost << '\n';
    }
    return 0;
}
