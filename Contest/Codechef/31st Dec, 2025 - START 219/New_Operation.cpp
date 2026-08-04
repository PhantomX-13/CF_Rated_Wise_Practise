#include <iostream>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        vector<long long> A(n);
        for(auto &x : A)
            cin >> x;

        vector<vector<long long>> mn(n, vector<long long>(n, 1e18));
        vector<vector<long long>> mx(N, vector<long long>(N, -1e18));

        for(int i=0; i<n; i++)
            mn[i][i] = mx[i][i] = A[i];

        for(int len=2; len<=n; len++){
            for(int l=0; l+len-1< n; l++)
            {
                int r = l+len-1;
                for(int k=l; k<r; k++)
                {
                    mn[l][r] = min(mn[l][r], mn[l][k] + 2 * mn[k + 1][r]);
                    mx[l][r] = max(mx[l][r], mx[l][k] + 2 * mx[k + 1][r]);
                }
            }
        }

        cout << mn[0][N - 1] << " " << mx[0][N - 1] << "\n";
    }
}
