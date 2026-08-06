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
        long long r, b , d;
        cin >> r >> b >> d;

        if(r > b)
            swap (r, b);

        if(b <= r * (d+1))
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
    return 0;
}