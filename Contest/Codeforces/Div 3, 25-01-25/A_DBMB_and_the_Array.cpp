#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,s,x;
        cin >> n >> s >> x;

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            sum = sum + a;
        }

        if(sum <= s && (s - sum)%x == 0)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}
