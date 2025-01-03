#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


ll bottom(vector<ll> &v, ll value) {
    ll l=0, h=v.size()-1, result=v.size();
    while (l<=h) {
        ll md = l + (h-l)/2;
        if (v[md]>=value) {
            result = md;
            h = md - 1;
        } else {
            l=md+1;
        }
    }

    return result;
}


ll top(vector<ll> &v,ll value){
    ll l=0,h=v.size()-1,result=v.size();
    while (l<=h) {
        ll md = l + (h-l)/2;
        if (v[md] > value) {
            result = md;
            h = md - 1;
        } else {
            l=md+1;
        }
    }

    return result;
}



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
        ll x,y;
        cin>>x>>y;
        ll r=top(v,y);
        ll l=bottom(v,x);
        cout<<r-l<<" ";
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


