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
    ll i,j,n,m,p=0,ans=0;
    cin>>n;

    vector<ll> v(n);

    bool fnd=false;
    for(i=0;i<n;i++){
        cin>>v[i];
        if(!fnd && v[i]!=0){
            p=i;
            fnd=true;
        }
    }

    for(i=p;i<n-1;i++){
        ans+=v[i];
        if(v[i]==0)ans++;
    }

    cout<<ans;
    nl;
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}
