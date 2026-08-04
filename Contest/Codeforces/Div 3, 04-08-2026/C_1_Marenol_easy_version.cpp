#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int a_even = 0, a_odd = 0;
        int b_even = 0, b_odd = 0;

        for(int i=0; i<n; i++)
        {
            if(a[i] == '1')
            {
                if(i%2 == 0)
                    a_even++;
                else
                    a_odd++;
            }
            if(b[i] == '1')
            {
                if(i%2 == 0)
                    b_even++;
                else
                    b_odd++;
            }
        }

        if(a_even == b_even && a_odd == b_odd)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}