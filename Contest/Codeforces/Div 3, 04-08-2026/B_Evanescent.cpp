#include <iostream>
#include <string>
#include <algorithm>

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
        string s;
        cin >> n >> s;

        int ori_len = 1;
        for(int i=0; i< n-1; i++)
        {
            if(s[i] != s[i + 1])
            {
                ori_len++;
            }
        }

        int ans = ori_len;

        for (int i=1; i< n-1; i++)
        {
            int rmv = 0;
            if(s[i] != s[i - 1])
                rmv++;
            if(s[i] != s[i + 1])
                rmv++;

            int add = 0;
            if(s[i-1] != s[i+1])
                add++;

            int new_len = ori_len - rmv + add;
            ans = min(ans, new_len);
        }

        cout << ans << '\n';
    }

    return 0;
}