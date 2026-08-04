#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool alternating = true;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                alternating = false;
                break;
            }
        }

        int minwf;

        if (alternating)
        {
            minwf = n;
        } 
        
        else
        {
            int cnt0 = 0, cnt1 = 0;
            for (char c : s)
            {
                if (c == '0')
                    cnt0++;
                else
                    cnt1++;
            }

            if ((cnt0 == 1 && (s[0] == '0' || s[n - 1] == '0')) || 
                (cnt1 == 1 && (s[0] == '1' || s[n - 1] == '1'))) {
                minwf = 2;
            }
            else
            {
                minwf = 1;
            }
        }

        cout << minwf << '\n';
    }

    return 0;
}