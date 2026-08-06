#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        bool hasZero = false;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == 0) hasZero = true;
        }

        if (!hasZero) {
            // all 1s
            cout << "Alice\n";
        } else {
            if (n % 2 == 0)
                cout << "Alice\n";
            else
                cout << "Bob\n";
        }
    }
    return 0;
}
//wrong ans