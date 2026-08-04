#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    int total = a * b;

    cout << total * 100 << '\n';
    return 0;
}
