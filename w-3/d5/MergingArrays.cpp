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
    ll i, j, n, m, p, ans = 0;
    cin >> n >> m;

    vector<ll> v(n), q(m), as;

    for (i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (i = 0; i < m; i++) {
        cin >> q[i];
    }

    ll x = 0, y = 0;


    while (x < n && y < m) {
        if (v[x] <= q[y]) {
            as.push_back(v[x]);
            x++;
        } else {
            as.push_back(q[y]);
            y++;
        }
    }


    while (x < n) {
        as.push_back(v[x]);
        x++;
    }


    while (y < m) {
        as.push_back(q[y]);
        y++;
    }

    vec(as);

}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    return 0;
}


