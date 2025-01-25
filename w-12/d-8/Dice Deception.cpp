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

    vector<ll> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
    }

    srt(v);
    j=0;

    for(i=0;i<n;i++){
        if(v[i]<=3 && j<k){
            ans+=(7-v[i]);
            j++;
        }else{
            ans+=v[i];
        }
    }

    cout<<ans;
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


