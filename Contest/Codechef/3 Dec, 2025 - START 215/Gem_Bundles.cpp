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
        int r,b,g;
        cin >> r >> b >> g;

        int bundles = min({r, b, g});
        int remaining = (r + b + g) - 3 * bundles;

        int coins = bundles * 10 + remaining * 3;

        cout << coins << '\n';
    }
    return 0;
}