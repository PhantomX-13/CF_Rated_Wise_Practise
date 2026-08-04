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
        string s;
        cin >> s;

        int balance = 0;
        int good = 0;

        for(char c : s)
        {
            if(c == '1')
                balance++;
            else
                balance--;

            if(balance >= 0)
                good++;
        }

        cout << good << "\n";
    }
    return 0;
}