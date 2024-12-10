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

    vector<ll>v(n);
    vector<ll>b(31);
    ll mxStBit = 0;
    for(i=0;i<n;i++){
        cin>>v[i];
        //mxStBit=max(mxStBit,__lg(v[i]));
    }

    for(i=0;i<n;i++){
        for(j=30;j>=0;j--){
            if((v[i]>>j)&1){
                b[j]++;
            }
        }
    }


    for(i=30;i>=0;i--){
        if(b[i]==n){
            ans+=(1LL<<i);
        }else{
            ll need=n-b[i];
            if(m>=need){
                ans+=(1LL<<i);
                m-=need;
            }
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


