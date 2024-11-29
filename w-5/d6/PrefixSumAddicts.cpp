#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(k);
    for (ll i = 0; i < k; i++) {
        cin >> v[i];
    }

    vector<ll> ai(k);
    ai[0] = v[0];


    for (ll i = 1; i < k; i++) {
        ai[i] = v[i] - v[i - 1];
        if (ai[i] < ai[i - 1]) {
            no;
            return;
        }
    }


    if (n > k) {
        ll remaining_length = n - k + 1;
        ll min_value = (ai[0]+remaining_length - 1)/remaining_length;
        if (min_value<0) {
            no;
            return;
        }
    }


    yes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
