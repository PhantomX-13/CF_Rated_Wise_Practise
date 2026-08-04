#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int sVal = 100 * b;
        int lVal = 225 * a;

        if(sVal > lVal)
        {
            cout << "Small\n";
        }
        else if(sVal < lVal)
        {
            cout << "Large\n";
        }
        else{
            cout << "Equal\n";
        }
    }

    return 0;
}
