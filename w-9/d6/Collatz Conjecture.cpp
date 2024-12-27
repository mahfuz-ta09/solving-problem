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
    ll i,j,n,m,p,ans;
    cin>>n>>m>>p;

    while(p>0 && n!=1){
        ans=(n/m+1)*m-n;
        ans=max(1ll,ans);
        ans=min(p,ans);
        n+=ans;
        while(n%m==0){
            n/=m;
        }

        p-=ans;
    }
    cout<<n+p%(m-1);
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
