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
    ll i,j=0,n,m,p=0,ans=0;
    cin>>n>>m;
    vector<ll> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];

        while(ans>m){
            ans-=v[p];
            p++;
        }

        if(ans==m)j++;
    }

    cout<<j;
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

