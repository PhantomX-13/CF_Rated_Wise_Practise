#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    char s[15];
    cin >> s;

    const char* t = "oxxoxxoxxoxxoxx";

    if(strstr(t, s) != NULL)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    
    return 0;
}