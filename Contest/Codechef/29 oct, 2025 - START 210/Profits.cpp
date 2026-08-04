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
        int n,x;
        cin >> n >> x;

        int profit = 0;

        for(int i= x+1; i <= n; i++)
        {
            profit += i - x;
        }

        cout << profit << '\n';
    }
    return 0;
}