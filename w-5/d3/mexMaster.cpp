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


    bool v = false;
    for(i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==0){
            ans++;
        }else if(x>=2){
            v=true;
        }
    }


    if(ans<=(n+1)/2){
        cout<<"0";
    }else if(v || ans==n){
        cout<<"1";
    }else{
        cout<<"2";
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

