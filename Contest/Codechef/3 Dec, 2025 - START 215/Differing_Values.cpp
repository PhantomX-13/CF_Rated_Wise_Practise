#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int zeroes = 0, ones = 0;
        for(char c : s)
        {
            if(c == '0')
                zeroes++;
            else
                ones++;
        }

        int oddC = 0;

        for(int start=0; start<k; start++)
        {
            int len = 0;
            for(int i=start; i<n; i+=k) 
            {
                len++;
            }
            if(len % 2 == 1)
                oddC++;
        }

        int imbalance = abs(zeroes - ones);

        if(imbalance <= oddC)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
