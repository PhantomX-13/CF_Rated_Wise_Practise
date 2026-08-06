#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int x;
    cin >> x;
    if(x%2==1){
        cout << "NO\n";
    }
    else{
        if(x==2) cout << "NO\n";
        else{
            cout << "YES\n";
        }
    }
    return 0;
}