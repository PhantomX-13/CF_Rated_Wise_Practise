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
        int n,a,b;
        cin >> n >> a >> b;

        int minDist = 1e9 + 5; 
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin >> x >> y;

            int dist = abs(a-x) + abs(b-y);
            minDist = min(dist, minDist);
            
        }

        cout << minDist << '\n';
    }
    return 0;
}
