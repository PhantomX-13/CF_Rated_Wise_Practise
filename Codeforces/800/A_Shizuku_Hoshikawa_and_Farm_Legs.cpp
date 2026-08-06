#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int confi = 0;
        if(n%2==1){
            confi = 0;
        }

        else{
            int cnt = (n/4) + 1;
            confi += cnt;
        }
        cout << confi << '\n';
    }
    return 0;
}

//https://codeforces.com/contest/2171/problem/A