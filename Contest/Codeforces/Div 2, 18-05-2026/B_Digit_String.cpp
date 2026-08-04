#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;

        int c1 = count(s.begin(), s.end(), '1');
        int c2 = count(s.begin(), s.end(), '2');
        int c3 = count(s.begin(), s.end(), '3');
        int c4 = count(s.begin(), s.end(), '4');

        cout << c4 + min(c2, c1 + c3) << '\n';
    }

    return 0;
}