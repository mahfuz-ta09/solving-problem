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
    ll i,j,n,m,p,ans=0,k;
    cin>>k;
    int ACC=0;
    bool hv=false;

    for(i=0;i<k;i++){
        int x;
        cin>>x;

        ACC+=x;
        if(x%3==1){
            hv=true;
        }
    }

    if(ACC%3==0){
        cout<<0;
    }else if(ACC%3==2){
        cout<<1;
    }else{
        if(hv==true){
            cout<<1;
        }else{
            cout<<2;
        }
    }
    nl;
}

int main(){
    iOS
    ll t;
    t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}

