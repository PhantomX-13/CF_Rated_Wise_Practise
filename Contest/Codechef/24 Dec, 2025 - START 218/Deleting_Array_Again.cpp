#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> A(n), C(n);
        for(int i=0; i<n; i++)
            cin >> A[i];
        for(int i=0; i<n; i++)
            cin >> C[i];

        sort(A.begin(), A.end(), greater<int>());
        sort(C.begin(), C.end());

        long long totalCost = 0;
        for(int i=0; i<n; i++)
        {
            totalCost += 1LL * A[i] * C[i];
        }

        cout << totalCost << '\n';
    }

    return 0;
}
