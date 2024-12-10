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
    cin>>n;

    vector<ll>v(n+1,0);
    for(i=1;i<=n;i++){
        ll x;
        cin>>x;
        v[i]=v[i-1]+x;
    }

    string ss;
    cin>>ss;

    ll r=n-1,l=0;



    while(r>l){
        while(l<n && ss[l]=='R'){
            l++;
        }

        while(r>=0 && ss[r]=='L'){
            r--;
        }

        if(l<r){
            ans+=v[r+1]-v[l];
            l++;
            r--;
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

