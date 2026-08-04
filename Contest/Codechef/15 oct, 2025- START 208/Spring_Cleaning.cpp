#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    int small = x * 30;
    int large = y * 60;

    cout << (small + large) << '\n';
    return 0;
}
