#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];

        sort(A.begin(), A.end());

        int max_count = 1;
        int count = 1;

        for(int i=1; i<n; i++)
        {
            if(A[i] == A[i-1])
            {
                count++;
                if(count > max_count)
                    max_count = count;
            }
            else{
                count = 1;
            }
        }

        cout << max_count << endl;
    }
    return 0;
}
