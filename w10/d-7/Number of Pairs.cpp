#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll lower(vector<ll> &v, ll value) {
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


ll upper(vector<ll> &v,ll value){
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
    cin>>n>>m>>p;
    vector<ll> v(n);
    for(i=0;i<n;i++)cin>>v[i];

    srt(v);

    for(i=0;i<n;i++){
        ll lw = lower(v,m-v[i]);
        ll hi = upper(v,p-v[i]);

        ans+=(hi-lw);

        if(lw<=i && i<hi){
            ans--;
        }
    }
    cout<<ans/2;
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


