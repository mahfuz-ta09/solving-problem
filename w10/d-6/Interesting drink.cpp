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
    cin>>n;
    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    srt(v);
    cin>>m;
    while(m--){
        ll x;
        cin>>x;
        ll l=0,r=n-1,cnt=0;

        while(l<=r){
            ll md=l+(r-l)/2;

            if(v[md]<=x){
                cnt=md+1;
                l=md+1;
            }else{
                r=md-1;
            }
        }
        cout<<cnt;
        nl;
    }
}


int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}
