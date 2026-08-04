#include <iostream>
#include <map>
using namespace std;

int getStrn(const string something)
{
    if(something == "Ocelot")
        return 1;
    if(something == "Serval")
        return 2;
    if(something == "Lynx")
        return 3;
    
    return 0;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    string x, y;
    cin >> x >> y;

    if(getStrn(x) >= getStrn(y))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
