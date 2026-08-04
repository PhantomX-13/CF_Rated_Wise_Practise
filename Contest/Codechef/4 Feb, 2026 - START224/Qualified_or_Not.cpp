#include <iostream>
using namespace std;

int main() {
	int n, x, y;
    cin >> n >> x >> y;

    if(n >= 2 * x && n >= 2 * y){
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}