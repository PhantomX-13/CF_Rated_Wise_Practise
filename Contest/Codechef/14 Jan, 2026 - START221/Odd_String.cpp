#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt[26] = {0};
        for(char c : s)
        {
            cnt[c - 'a']++;
        }

        bool ok = true;
        for(int i=0; i<26; i++)
        {
            if(cnt[i] > 2)
            {
                ok = false;
                break;
            }
        }

        if(ok == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}