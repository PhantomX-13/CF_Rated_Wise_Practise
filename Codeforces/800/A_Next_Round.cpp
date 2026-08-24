#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if(!(cin >> n >> k))
        return 0;

    vector<int> scores(n);
    for(int i=0; i<n; i++)
    {
        cin >> scores[i];
    }

    int target_score = scores[k - 1];
    int advancers = 0;

    for(int i=0; i<n; i++)
    {
        if(scores[i] >= target_score && scores[i] > 0)
        {
            advancers++;
        }
        else
        {
            break;
        }
    }

    cout << advancers << '\n';

    return 0;
}