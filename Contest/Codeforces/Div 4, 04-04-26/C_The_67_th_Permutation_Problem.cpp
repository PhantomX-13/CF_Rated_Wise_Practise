#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int small = 1;
        int large = n+1;

        for(int i=0; i<n; i++)
        {
            cout << small << " " << large << " " << large + 1 << " ";
            
            small++;
            large += 2;
        }
        cout << '\n';
    }
    return 0;
}