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
        int x,y;
        cin >> x >> y;
        int alice = (x+y) / 2;
        int bob = (y-x) / 2;

        cout << alice << " " << bob << '\n';
    }
    return 0;
}
