#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s;
    cin >> s;
    int cnt = 1;
    bool dangerous = false;

    for(int i=1; i <= s.size(); i++)
    {
        int cnt = 0;
        if(s[i] == s[i-1])
        {
                cnt++;
                if(cnt >= 7)
                {
                    dangerous = true;
                    break;
                }
                else{
                    cnt = 1;
                }
        }
        
    }

    if(dangerous)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}