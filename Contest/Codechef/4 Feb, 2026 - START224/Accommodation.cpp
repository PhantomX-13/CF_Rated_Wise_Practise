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
        long long b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        if(x + y > n)
        {
            cout << -1 << '\n';
            continue;
        }

        long long min_rooms = (b + g + n - 1) / n;
        long long max_rooms = min(b / x, g / y);

        if(min_rooms > max_rooms){
            cout << -1 << '\n';
        }
        else
        {
            cout << min_rooms << '\n';
        }
    }

    return 0;
}