#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> P(n);
        for(int i=0; i<n; i++)
        {
            cin >> P[i];
        }

        long long low = P[0], high = P[0];
        int trades = 0;

        for(int i=1; i<n; i++)
        {
            low = min(low, P[i]);
            high = max(high, P[i]);

            if(high - low > k)
            {
                trades++;
                low = high = P[i];
            }
        }

        cout << trades << '\n';
    }
    return 0;
}
