#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int rng1 = x - y;
        int rng2 = x + y;

        int rng3 = x - z;
        int rng4 = x + z;

        int left  = max(rng1, rng3);
        int right = min(rng2, rng4);

        int ans = 0;

        if(right >= left)
        {
            ans = right - left + 1;

            if(x >= left && x <= right)
            {
                ans--;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
