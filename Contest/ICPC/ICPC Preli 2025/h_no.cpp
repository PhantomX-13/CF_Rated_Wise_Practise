#include <iostream>
#include <set>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector< long long > v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long arr[m][3];
        set<long long> s;
        int cnt = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]%2 == 0) cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}