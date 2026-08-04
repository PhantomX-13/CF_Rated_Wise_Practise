#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if(sum >= 0){
            cout << 0 << '\n';
        }
        else{
            int X = (n - sum - 1) / n;
            cout << X << '\n';
        }
    }
    return 0;
}