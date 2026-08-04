#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        bool can_take[105] = {false}; 
        can_take[1] = true;
        
        int count = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            
            if(can_take[x])
            {
                count++;
                can_take[x + 1] = true;
            }
        }
        cout << count << '\n';
    }
    return 0;
}