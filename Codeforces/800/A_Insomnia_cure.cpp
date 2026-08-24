#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l, m, n, d;
    if(!(cin >> k >> l >> m >> n >> d))
        return 0;

    int damaged_count = 0;

    for(int i=1; i<=d; i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
        {
            damaged_count++;
        }
    }

    cout << damaged_count << '\n';
    return 0;
}