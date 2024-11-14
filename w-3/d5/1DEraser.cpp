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

    string ss;
    cin>>ss;

    for(i=0;i<n;i++){
        if(ss[i]=='B'){
            ans++;
            i+=m-1;
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
    return 0;
}


