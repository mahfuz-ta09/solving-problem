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
    ll i,j,n,m,p=0,ans=0;
    cin>>n;
    vector<ll>v(n);

    for(i=0;i<n;i++)cin>>v[i];

    map<ll,ll>mp;

    for (i=0;i<n;i++) {
        if (mp.find(v[i])!=mp.end() && mp[v[i]]>=p) {
            p = mp[v[i]] + 1;
        }
        mp[v[i]]=i;
        ans=max(ans, i - p + 1);
    }

    cout<<ans;
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

