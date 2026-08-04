#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int remaining = x - 100;

    int popcorn = remaining / 50;

    cout << popcorn << '\n';

    return 0;
}
