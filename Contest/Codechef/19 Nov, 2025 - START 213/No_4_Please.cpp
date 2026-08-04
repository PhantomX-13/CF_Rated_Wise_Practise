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

        int c1 = 0, c2 = 0, c3 = 0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x == 1)
                c1++;
            else if(x == 2)
                c2++;
            else if(x == 3)
                c3++;
        }

        int deletions = min(c1, c3) + max(0, c2 - 1);
        cout << deletions << '\n';
    }
    return 0;
}