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
    ll i,j,n,k,p,ans=0;
    cin>>n>>k;

    vector<ll>v(n);

    for(i=0;i<n;i++){
        cin >> v[i];
    }

    vector<pair<ll, ll>> a;

    for(i=0;i<n;i++){
        ll res=v[i]%k;

        if (res==0){
            res+=k;
        }

        a.push_back({-res, i});
    }

    sort(a.begin(), a.end());

    for(auto [x,y]:a){
        cout<<y+1<<" ";
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


