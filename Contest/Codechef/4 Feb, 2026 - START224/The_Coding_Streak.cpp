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

        int max_streak = 0, current_streak = 0;

        for(int i=0; i<n; i++)
        {
            int A;
            cin >> A;

            if(A >= 1)
            {
                current_streak++;
                if(current_streak > max_streak)
                    max_streak = current_streak;
            }
            
            else
            {
                current_streak = 0;
            }
        }

        cout << max_streak << '\n';
    }

    return 0;
}