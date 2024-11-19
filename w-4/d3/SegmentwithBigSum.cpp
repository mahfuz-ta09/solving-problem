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
    ll i, j, n, m;
    cin >> n >> m;

    vector<ll> v(n);
    for (i = 0; i < n; i++) cin >> v[i];

    ll l = 0, r = 0, sum = 0;
    ll ans = LLONG_MAX;

    while (r < n) {
        sum += v[r];

        while (sum >= m) {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }

        r++;
    }

    if (ans == LLONG_MAX) {
        cout << -1;
    } else {
        cout << ans;
    }
    nl;
}

int main() {
    iOS
    ll t = 1;
    while (t--) solve();
    return 0;
}
