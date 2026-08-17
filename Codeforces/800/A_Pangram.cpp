#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n<26)
    {
        cout << "NO\n";
        return 0;
    }

    unordered_set<char> unique_letters;
    for(char c : s)
    {
        unique_letters.insert(tolower(c));
    }

    if(unique_letters.size()==26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}