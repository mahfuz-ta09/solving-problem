#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n>>m;
    vector<ll> v(n),b(n);
    for(i=0;i<n;i++)cin>>v[i];

    sort(v.rbegin(),v.rend());
    for(i=0;i<n;i++) {
        b[i] = (i ? b[i - 1] : 0) + v[i];
    }

    while(m--) {
        ll x; cin >> x;
        ll l = 1, r = n;
        ans = -1;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(b[mid - 1] >= x) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }

}

int main(){
    iOS
    ll t;
    //t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}



