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
        vector<int> tokens(3);
        cin >> tokens[0] >> tokens[1] >> tokens[2];
        sort(tokens.begin(), tokens.end());

        int x = tokens[0];
        int y = tokens[1];
        int z = tokens[2];

        if(x == y||y == z)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << min(y - x, z - y) << '\n';
        }
    }
    return 0;
}