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

    vector<ll>a(n),b(m);
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<m;i++)cin>>b[i];

    ll l=0,r=0;

    while(l<n&&r<m){
        ll cur=a[l],cnt1=0,cnt2=0;
        while(l<n && a[l]==cur){
            cnt1++;
            l++;
        }
        while(r<m  && cur>b[r]){
            r++;
        }
        while(r<m && b[r]==cur){
            cnt2++;
            r++;
        }
        ans+=(cnt1*cnt2);
    }
    cout<<ans;
    nl;
}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    return 0;
}


