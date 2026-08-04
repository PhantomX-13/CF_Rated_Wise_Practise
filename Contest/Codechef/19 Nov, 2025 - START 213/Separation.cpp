#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long x;
        cin >> n >> x;

        int lessCnt = 0, equalCnt = 0, greaterCnt = 0;

        for(int i=0; i<n; i++)
        {
            long long a;
            cin >> a;

            if(a < x)
                lessCnt++;
            else if(a == x)
                equalCnt++;
            else
                greaterCnt++;
        }

        if(lessCnt > 0 && greaterCnt > 0 && equalCnt == 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}