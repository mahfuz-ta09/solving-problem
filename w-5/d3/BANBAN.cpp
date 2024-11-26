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

    vector<pair<ll,ll>> v;

    for(i=1;i<=n;i++){
        v.push_back({(i-1)*3+2,3 * n - (i - 1) * 3 + 1});
    }

    cout<<v.size();
    nl;
    for(auto [x,y]:v){
        cout<<x<<" "<<y<<"\n";
    }
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


