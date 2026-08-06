#include <iostream>
#define ll long long
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll u, v;
        cin >> u >> v;
        ll x = u * u;
        ll y = v * v;
        x = -x;

        cout << x << ' ' << y << '\n';

    }
    return 0;
}
