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

        int bestIndex = 1;
        int maxSpeed = -1;

        for(int i=1; i<=n; i++)
        {
            int d, ti;
            cin >> d >> ti;

            int speed = d/ti;

            if(speed > maxSpeed)
            {
                maxSpeed = speed;
                bestIndex = i;
            }
        }

        cout << bestIndex << '\n';
    }

    return 0;
}
