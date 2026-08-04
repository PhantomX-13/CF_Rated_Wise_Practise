#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<long long> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
        }

        long long d = 0;
        for(int i=1; i<n; i++) 
        {
            d = gcd(d, A[i] - A[0]);
        }

        long long total_terms = (A[n-1] - A[0])/d + 1;
        long long opr = total_terms - n;

        cout << opr << '\n';
    }

    return 0;
}