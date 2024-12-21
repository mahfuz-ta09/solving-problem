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
    vector<ll> v;

    for(i=0;i<n;i++){
        ll x;
        cin>>x;

        ll cur=ans+(v.size()>0 && v.back()>x);
        if(cur==0||(cur==1 && x<=v[0])){
            v.push_back(x);
            ans=cur;
            cout<<1;
        }else{
            cout<<0;
        }
    }
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


