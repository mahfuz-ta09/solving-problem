#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> steps(n);
    for (ll i = 0; i < n; i++) {
        cin >> steps[i];
    }

    vector<ll> prefixSum(n);
    prefixSum[0] = steps[0];
    for (ll i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + steps[i];
    }

    while(q--){
        ll k;
        cin >> k;

        ll l = 0, h = n - 1,result=0;
        while (l <= h) {
            ll md = l + (h - l) / 2;
            if (steps[md]<=k) {
                result=prefixSum[md];
                l=md+1;
            } else {
                h=md-1;
            }
        }

        cout<<result<<" ";
    }

    cout<<"\n";
}

int main() {
    iOS
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}
