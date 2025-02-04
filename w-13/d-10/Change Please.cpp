#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n;

    if(n%10==0){
        cout<<100-n;
    }else{
        int v=100-n;
        int a=v/10;

        if(a>=1){
            cout<<a*10;
        }else{
            cout<<0;
        }
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


