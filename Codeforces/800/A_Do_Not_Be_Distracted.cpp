#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool suspicious = false;
        for(char c='A'; c<='Z'; c++)
        {
            int first = n;
            int last = -1;
            for(int i=0; i<n; i++)
            {
                if(s[i] == c){
                    first = min(first, i);
                    last = max (last, i);
                }
            }

            if(last != -1){
            for(int i=first; i<=last; i++)
            {
                if(s[i]!= c)
                {
                    suspicious = true;
                    break;
                }
            }
            if(suspicious) 
                break;

            }
        }

        if(suspicious)
                cout << "NO\n";
            else
                cout << "YES\n";
    }
    return 0;
}