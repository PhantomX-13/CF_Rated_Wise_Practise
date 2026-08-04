#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;

    int mini_cost = min(1000, n * 200);
    cout << mini_cost << '\n';
    return 0;
}
