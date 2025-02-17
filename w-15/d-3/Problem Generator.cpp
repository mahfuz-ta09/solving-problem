#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    int i,j,n,m,p,ans=0;
    cin >> n >> m;
    string a;
    cin >> a;

    for (char ch = 'A'; ch < 'H'; ch++) {
        int cnt = count(a.begin(), a.end(), ch);
        ans += max(0, m - cnt);
    }

    cout << ans;
    nl;
}
int main(){
    iOS
    ll t;
    t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


