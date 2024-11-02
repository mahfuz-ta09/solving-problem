#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,i,k,ans = 0;
    cin >> n >> k;

    map<int,vector<int>> v;

    while(k--){
        ll a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    vector<ll> costs;
    for(auto kl:v){
        auto [x,y] = kl;
        sort(y.begin(),y.end());

        ll cost = 0;
        for(auto bl:y){
            cost+=bl;
        }
        costs.push_back(cost);
    }

    for(i=0 ; i<n && i<costs.size() ; i++){
        ans+=costs[i];
    }

    cout<<ans<<"\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
