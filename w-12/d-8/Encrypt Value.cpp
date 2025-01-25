#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n;

    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    srt(v);

    ans=v[0];

    for(i=1;i<n;i++){
        if(v[i]==0 || v[i]==1 || (ans<=1 && v[i]>1)){
            ans=(ans+v[i])%MOD;
        }else{
            ans=(ans*v[i])%MOD;
        }
    }

    cout<<ans;
    nl;
}


int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


