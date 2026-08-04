#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        bool even = false, odd = false;

        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            if(A[i]%2 == 0)
            {
                even = true;
            }
            else
            {
                odd = true;
            }
        }

        if(even && odd)
        {
            sort(A.begin(), A.end());
        }

        for(int i=0; i<n; i++)
        {
            cout << A[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}