#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int freq[101] = {0};

        for(int i=0; i<n; i++)
        {
            int color;
            cin >> color;
            freq[color]++;
        }

        int maxFreq = 0, answer = 0;
        for(int i=1; i<=n; i++)
        {
            if(freq[i] > maxFreq)
            {
                maxFreq = freq[i];
                answer = i;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
