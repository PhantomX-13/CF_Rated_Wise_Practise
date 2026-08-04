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
        int n,x,k;
        cin >> n >> x >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        for(int i=0; i<k; i++)
        {
            a[i] = 0;
            x += 100;
        }

        int max = 0;
        for(int s : a)
        {
            if(s > x)
                max++;
        }
        cout << max+1 << '\n';
    }
    return 0;
}
