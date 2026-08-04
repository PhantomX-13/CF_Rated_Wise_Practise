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
        vector<int> seats(n);
        for (int i=0; i<n; i++)
        {
            cin >> seats[i];
        }

        int min_cost = INT_MAX;

        for(int i=0; i< n-1; i++)
        {
            int cost = seats[i] + seats[i + 1];
            if(cost < min_cost)
            {
                min_cost = cost;
            }
        }
        
        cout << min_cost << endl;
    }

    return 0;
}
