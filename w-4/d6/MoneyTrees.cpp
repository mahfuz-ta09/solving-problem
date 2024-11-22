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

    vector<ll>v(n),b(n);

    for(i=0;i<n;i++)cin>>v[i];
    for(i=0;i<n;i++)cin>>b[i];

    ll l=0,r=0,sum=0,maxLen=0;

    while(r<n){
        ans+=v[r];

        while(l<r && (b[r-1]%b[r] !=0 || ans>m)){
            ans-=v[l];
            l++;
        }

        if(ans<=m){
            maxLen=max(maxLen,r-l+1);
        }
        r++;
    }

    cout<<maxLen;
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

