#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n,i,m,q;
    cin>>n>>m>>q;

    vector<ll> a(m);
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(i=0;i<q;i++){
        ll c;
        cin>>c;
        auto k = upper_bound(a.begin(),a.end(),c)-a.begin();
        if(k==0){
            cout<<a[0]-1;
        }else if(k==m){
            cout<<n-a[m-1];
        }else{
            cout<<(a[k]-a[k-1])/2;
        }
        nl;
    }

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}


