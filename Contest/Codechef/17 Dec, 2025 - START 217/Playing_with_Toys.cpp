#include <iostream>
using namespace std;

int main() {
    int n, m;
        cin >> n >> m;
    
        int toysLeft = max(0, n - m);
        cout << toysLeft << '\n';
}
