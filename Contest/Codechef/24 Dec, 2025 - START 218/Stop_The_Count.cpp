#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ones = 0;
        int ways = 0;

        for(int k=1; k<=n; k++)
        {
            if(s[k - 1] == '1')
            {
                ones++;
            }
            if(2 * ones > k)
            {
                ways++;
            }
        }

        cout << ways << endl;
    }

    return 0;
}
