#include <iostream>
using namespace std;

bool isSquare(int n)
{
    int root = sqrt(n);
    return (root * root == n);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        bool foundNotSquare = false;
        for(int i=0; i<n; i++)
        {
            if(!isSquare(v[i]))
            {
                foundNotSquare = true;
                break;
            }
        }

        if(foundNotSquare)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}