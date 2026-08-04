#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];

        string S;
        cin >> S;

        int normalSum = 0, specialSum = 0;

        for(int i=0; i<n; i++)
        {
            if(S[i] == '0')
                normalSum += A[i];

            else
                specialSum += A[i];
        }

        int ans = normalSum;

        if(normalSum >= c && specialSum > c)
        {
            ans = normalSum + specialSum - c;
        }

        cout << ans << '\n';
    }
    return 0;
}