#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        int A[101], B[101];

        for(int i=0; i<n; i++){
            cin >> A[i];
        }

        for(int i=0; i<m; i++)
        {
            cin >> B[i];
        }

        int count = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(B[j] < A[i])
                {
                    count++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}