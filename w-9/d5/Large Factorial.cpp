#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
ll MOD=1e9+7;

void solve(){
    ll i,j,n,m,p,ans=1;
    cin>>n;

    for(i=1;i<=n;i++){
        ans = (ans*i)% MOD;
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

