#include <iostream>
#define ll long long
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        ll ans = 0;
        for(int i=1; i<=n; i++)
        {
            ll A_i; 
            cin >> A_i;

            if(A_i > i + ans)
            {
                ans += (A_i - (i + ans));
            }
        }
        cout << ans << '\n';

    }
    return 0;
}