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
    cin>>n>>p;
    vector<ll> v;

    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }

    srt(v);
    if(v.size()<p){
        cout<<-1;
    }else{
        cout<<v[p-1];
    }
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
