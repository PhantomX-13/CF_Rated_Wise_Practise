#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int x;
    cin >> x;

    long long prize = 1000 * (1LL << (4 - x));

    cout << prize << '\n';
    
    return 0;
}
