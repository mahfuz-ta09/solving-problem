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
    ll i,j,n,m,p,ans=3;
    cin>>n;
    vector<ll> v(n+1);

    for(i=1;i<=n;i++)cin>>v[i];

    for(i=1;i<=n;i++){
        if(i==v[v[i]]){
            ans=2;
        }
    }
    cout<<ans;
    nl;
}


int main(){
    iOS
    ll t;
    //t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}

