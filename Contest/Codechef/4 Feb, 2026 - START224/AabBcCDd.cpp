#include <iostream>
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
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for(char c : s)
        {
            char lower = tolower(c);
            freq[lower - 'a']++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int result;
        if(freq[1] > 0)
        {
            result = freq[0] + freq[1];
        }

        else
        {
            result = freq[0];
        }
        cout << result << '\n';
    }

    return 0;
}