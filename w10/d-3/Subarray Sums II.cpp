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
    ll i,j,k,n,m,p=0,ans=0;
    cin>>n>>m;

    vector<ll>v(n);
    for(i=0;i<n;i++)cin>>v[i];


    map<ll,ll> prefSums;

    ll pref=0;
    prefSums[0]=1;
    for (int i = 0; i < n; ++i) {
        pref += v[i];
        p += (prefSums[pref - m]);
        prefSums[pref] += 1;
    }
    nl;

    for(auto [x,y]:prefSums){
        cout<<x<<" "<<y;
        nl;
    }

    cout<<p;
    nl;
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


