#include <iostream>
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
        cin >> n;

        int freq[1001] = {0};
        int totalSum = 0;

        for(int i=0; i<n; i++)
        {
            int val;
            cin >> val;
            freq[val]++;
            totalSum += val;
        }

        int maxFreq = 0;
        int maxVal = 0;
        for(int val=1; val<=1000; val++)
        {
            if(freq[val] > maxFreq)
            {
                maxFreq = freq[val];
                maxVal = val;
            }
        }

        int otherCards = n - maxFreq;
        int otherSum = totalSum - (maxFreq * maxVal);

        int usableCopies = min(maxFreq, otherCards + 2);

        int totalDamage = otherSum + (usableCopies * maxVal);

        cout << totalDamage << '\n';
    }

    return 0;
}