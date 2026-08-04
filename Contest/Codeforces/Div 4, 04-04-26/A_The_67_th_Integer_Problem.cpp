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
        int x;
        cin >> x;

        if (x < 67)
            cout << x + 1 << '\n';
        else
            cout << x << '\n';
    }
    return 0;
}
