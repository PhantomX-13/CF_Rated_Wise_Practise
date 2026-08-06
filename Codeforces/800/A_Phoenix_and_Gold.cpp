#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> w(n);
        int total_sum = 0;

        for(int i=0; i<n; i++)
        {
            cin >> w[i];
            total_sum += w[i];
        }

        if(total_sum == x)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            int current_sum = 0;
            for(int i=0; i<n; i++)
            {
                if(current_sum + w[i] == x)
                {
                    swap(w[i], w[i + 1]);
                }
                current_sum += w[i];
            }
            
            for(int i=0; i<n; i++)
            {
                cout << w[i] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}