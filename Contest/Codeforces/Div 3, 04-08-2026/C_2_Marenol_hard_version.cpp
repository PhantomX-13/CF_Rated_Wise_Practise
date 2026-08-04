#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>

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
        string a, b;
        cin >> n >> a >> b;

        vector<int> a_even, a_odd;
        vector<int> b_even, b_odd;

        for(int i=0; i<n; i++)
        {
            if(a[i] == '1')
            {
                if(i%2 == 0)
                    a_even.push_back(i);
                else
                    a_odd.push_back(i);
            }
            if(b[i] == '1')
            {
                if(i%2 == 0)
                    b_even.push_back(i);
                else
                    b_odd.push_back(i);
            }
        }

        if(a_even.size() != b_even.size() || a_odd.size() != b_odd.size())
        {
            cout << -1 << '\n';
            continue;
        }

        long long total_ops = 0;

        for(size_t i = 0; i<a_even.size(); i++)
        {
            total_ops += abs(a_even[i] - b_even[i]) / 2;
        }

        for(size_t i=0; i<a_odd.size(); i++)
        {
            total_ops += abs(a_odd[i] - b_odd[i]) / 2;
        }

        cout << total_ops << '\n';
    }

    return 0;
}