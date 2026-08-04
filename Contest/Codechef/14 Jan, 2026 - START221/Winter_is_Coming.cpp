#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int ans = 0;
        bool cold = false;

        for(int i=0; i<n; i++)
        {
            int t;
            cin >> t;

            if(t < a && !cold)
            {
                ans++;
                cold = true;
            }
            if(t > b)
            {
                cold = false;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}