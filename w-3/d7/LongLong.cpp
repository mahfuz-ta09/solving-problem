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
    ll i,j,n,m,p,ans=0,cnt=0;
    cin>>n;

    vector<ll> vc;
    for(i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x!=0){
            vc.push_back(x);
        }
    }

    j=0;
    bool tmp=false;

    for(auto a:vc){
        ans+=abs(a);
        if(a<0 && !tmp){
            cnt++;
            tmp=true;
        }
        if(a>0){
            tmp=false;
        }
    }

    cout<<ans<<" "<<cnt;
    nl;
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}

