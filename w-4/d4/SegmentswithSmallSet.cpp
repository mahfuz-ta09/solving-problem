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
    cin>>n>>m;

    vector<ll> v(n);
    for(i=0;i<n;i++)cin>>v[i];

    ll l=0,r=0,sum=0;

    map<ll,ll>track;
    while(r<n){
        track[v[r]]++;
        if(track[v[r]]==1)ans++;

        while(ans>m){
            track[v[l]]--;
            if(track[v[l]]==0)ans--;
            l++;
        }
        sum+=(r-l+1);
        r++;
    }

    cout<<sum;
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


