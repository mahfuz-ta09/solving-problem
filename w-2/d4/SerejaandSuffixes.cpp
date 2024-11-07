#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i,m,j;
    cin>>n>>m;

    vector<ll>v(n);
    vector<ll>ans(n,0);
    unordered_set<ll>s;

    for(i=0;i<n;i++){
        cin>>v[i];
    }

    for(i=n-1;i>=0;i--){
        s.insert(v[i]);
        ans[i]=s.size();
    }

    while(m--){
        ll c;
        cin>>c;

        cout<<ans[c-1];
        nl;
    }


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

