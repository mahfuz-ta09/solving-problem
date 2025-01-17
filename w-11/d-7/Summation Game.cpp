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
    ll i,j,n,k,x,ans=0;
    cin>>n>>k>>x;

    vector<ll> v(n),prf(n+1,0);

    for(i=0;i<n;i++){
        cin>>v[i];
    }

    srt(v);

    for(i=1;i<=n;i++){
        prf[i]=v[i-1]+prf[i-1];
    }

    ans=LLONG_MIN;
    for(i=n;i>=0;i--){
        ll jmp=n-i;
        if(jmp>k)break;

        ll r=min(i,x);
        ll sum=(prf[i-r]-(prf[i]-prf[i-r]));
        ans=max(ans,sum);
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


