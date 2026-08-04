#include <iostream>
#define ll long long int
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int sz = s.size();
        int cnt = 0;
        for (int i = 0; i < sz; i++)
        {
            if(s[i] == '0') 
            {
                break;
            };
            cnt++;
        }
        cout << sz << " " << cnt-1 << nl;
        
    }

    return 0;
}