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
    ll i,j=0,n,k,d,ans=0;
    cin>>n>>k>>d;

    vector<ll> v(n);

    for(i=0;i<n;i++)cin>>v[i];

    map<ll,ll> mp;

    for(i=0;i<d;i++){
        if(mp[v[i]] == 0) ans++;
        mp[v[i]]++;
    }

    j=ans;


    for(i=d;i<n;i++){
        mp[v[i-d]]--;
        if(mp[v[i-d]]==0)ans--;
        if(mp[v[i]]==0)ans++;
        mp[v[i]]++;
        j=min(ans,j);
    }
    cout<<j;
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


