#include <iostream>
#include <map>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    string s;
    cin >> s;

    map<char,int> freq;
    for(char c : s)
        freq[c]++;

    for(auto p : freq)
    {
        if(p.second == 1)
        {
            cout << p.first << endl;
            return 0;
        }
    }
    
    return 0;
}
