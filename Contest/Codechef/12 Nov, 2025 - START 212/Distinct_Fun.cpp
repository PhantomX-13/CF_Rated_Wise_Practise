#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];

        unordered_set<int> s(A.begin(), A.end());

        if(s.size() == n)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    return 0;
}
