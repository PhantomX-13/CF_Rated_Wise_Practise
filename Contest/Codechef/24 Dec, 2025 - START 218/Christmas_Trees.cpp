#include <iostream>
using namespace std;

int main()
{
    int n, a, m, b;
    cin >> n >> a >> m >> b;

    int cost = n * a;
    int revenue = m * b;

    int profit = revenue - cost;
    cout << profit << endl;

    return 0;
}
