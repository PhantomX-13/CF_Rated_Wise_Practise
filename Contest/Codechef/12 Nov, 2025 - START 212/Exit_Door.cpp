#include <iostream>
#include <vector>
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

        vector<int> p(n);
        vector<int> pos(n + 1);

        for(int i=0; i<n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i;
        }

        vector<int> alive(n, 1);
        long long total_disturb = 0;

        for(int per = n; per >= 1; per--)
        {
            int idx = pos[per];

            int l=0, r=0;
            for(int i = idx-1; i >= 0; i--)
                if(alive[i]) 
                    l++;

            for(int i = idx+1; i<n; i++)
                if(alive[i])
                    r++;

            total_disturb += min(l, r);
            alive[idx] = 0;
        }

        cout << total_disturb << '\n';
    }
    return 0;
}