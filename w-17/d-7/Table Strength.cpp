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

void solve() {
    ll i, j, n, m, p, ans = 0;
    cin >> n;

    vector<ll> v(n);
    for(i=0;i<n;i++)cin >> v[i];

    srt(v);
    j=2;
    ans=v[n-1];
    p=0;

    for(i=n-2;i>=0;i--) {
        p=j*v[i];
        ans=max(ans,p);
        j++;
    }

    cout<<ans;
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

