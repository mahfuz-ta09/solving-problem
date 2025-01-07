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

    j=0;
    unordered_map<ll,ll> mp;
    for(i=0;i<n;i++){
        while(j<n && (mp.size()<m || mp.count(v[j])>0)){
            mp[v[j]]++;
            j++;
        }
        ans+=j-i;
        mp[v[i]]--;
        if(mp[v[i]]==0){
            mp.erase(v[i]);
        }
    }

    cout<<ans;
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


