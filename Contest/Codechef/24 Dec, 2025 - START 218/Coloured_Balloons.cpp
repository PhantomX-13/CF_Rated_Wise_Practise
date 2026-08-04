#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int totalCost = 0;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin >> a;
            totalCost += i * a;
        }

        cout << totalCost << endl;
    }

    return 0;
}
