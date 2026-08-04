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
        int a[7];
        for(int i=0; i<7; i++)
            cin >> a[i];

        sort(a, a+7);

        int sum = 0;

        for(int i=0; i<6; i++)
            sum -= a[i];

        sum += a[6];

        cout << sum << '\n';
    }
    return 0;
}