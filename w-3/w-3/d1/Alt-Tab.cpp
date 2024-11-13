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
    ll n,i,m,p;
    cin>>n;

    map<string,ll>st;
    map<ll,string>sb;
    vector<ll>v;

    for(i=0;i<n;i++){
        string ss;
        cin>>ss;
        st[ss]=i;
    }

    for(auto [a,b]:st){
        sb[b]=a;
        v.push_back(b);
    }

    sort(v.begin(),v.end(),greater<int>());


    for(auto a:v){
        ll k = sb[a].size();
        cout<<sb[a][k-2]<<sb[a][k-1];
    }
}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    return 0;
}


