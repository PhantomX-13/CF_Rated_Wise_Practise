#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    char s[12];
    cin >> s;
    int count = 0;
    for(int i=0; s[i]!= '\0'; i++){
        if(s[i] == 'i' || s[i] == 'j'){
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}