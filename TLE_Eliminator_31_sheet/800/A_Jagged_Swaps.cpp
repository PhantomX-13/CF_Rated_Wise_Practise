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
        int n;
        cin >> n;
        int a[n];
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        if(a[1] == 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1899/A
// Time Complexity: O(1)
// Space Complexity: O(1)