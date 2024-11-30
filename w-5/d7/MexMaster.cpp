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


    bool valid=false;

    for(int i=1;i<=n;i++) {
        int x;
        cin>>x;
        if(x==0) {
            ans++;
        } else if(x>=2) {
            valid=true;
        }
    }

    if(ans<=(n+1)/2){
        cout<<"0\n";
    }else if(valid || ans==n){
        cout<<"1\n";
    }else{
        cout<<"2\n";
    }
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}

