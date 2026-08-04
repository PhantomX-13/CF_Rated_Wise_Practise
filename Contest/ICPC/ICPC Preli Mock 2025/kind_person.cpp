#include <iostream>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)

int main()
{
    fast;

    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n, count = 0, ans;
        bool flag = true;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (arr[i] > arr[j])
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            if (count == n - i)
            {
                for(int k = i; k >= 1; k--)
                {
                    if (arr[i] < arr[k])
                    {
                        flag = false;
                        break;
                    }
                    else if (k == 1)
                    {
                        ans = i;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "Case " << z + 1 << ": " << ans << endl;
        }
        else
        {
            cout << "Case " << z + 1 << ": " << "Humanity is doomed!\n";
        }
    }

    return 0;
}