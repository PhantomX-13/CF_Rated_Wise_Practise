#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        vector<long long> copy_a = a;
        sort(copy_a.begin(), copy_a.end());

        if(copy_a == a || k > 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}

//Problem link: https://codeforces.com/problemset/problem/1903/A