#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int happy = min(n, m-n);

    cout << happy << '\n';
    return 0;
}
