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
        int n,a,b;
        cin >> n >> a >> b;

        long long groups = n / 3;
        long long remainder = n % 3;

        long long cost = groups * min(3 * a, b);

        if(remainder == 1)
        {
            cost += min(a, b);
        }
        else if(remainder == 2)
        {
            cost += min(2 * a, b);
        }

        cout << cost << '\n';
    }
    return 0;
}