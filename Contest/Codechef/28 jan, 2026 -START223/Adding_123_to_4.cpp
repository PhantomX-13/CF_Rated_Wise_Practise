#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int pairs1 = min(x, z);
        int pairs2 = y/2;

        cout << pairs1 + pairs2 << '\n';
    }

    return 0;
}
