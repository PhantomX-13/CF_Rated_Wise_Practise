#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n))
        return 0;

    vector<int> a(n);
    int max_val = -1, min_val = 101;
    int max_idx = -1, min_idx = -1;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        
        if(a[i] > max_val)
        {
            max_val = a[i];
            max_idx = i;
        }
        
        if(a[i] <= min_val)
        {
            min_val = a[i];
            min_idx = i;
        }
    }

    int ans = max_idx + (n - 1 - min_idx);

    
    if(max_idx > min_idx)
    {
        ans--;
    }

    cout << ans << '\n';

    return 0;
}