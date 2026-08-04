#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fast ios_base::sync_with_stdio(false);cin.tie(0)

void solve(){
    string a;
    cin>>a;
    int count1=a.size();
    int count2=0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='\\' && i+1 < a.size() && a[i+1]=='0')
        {
            break;
        }
    count2++;
    }
  cout << count1 << " " << count2 << '\n';
}

int main(){
fast;

    int n;
    cin>>n;
    while(n--){
        solve();
    }

return 0;
}