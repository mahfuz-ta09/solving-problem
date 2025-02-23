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
    cin>>n>>m;
    vector<char>a(n+1),b(m+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    vector<int>dp(m+1);
    dp[1]=(a[1]==b[1]?1:0);
    for(int i=2;i<=m;i++){
        if(dp[i-1]!=n && b[i]==a[dp[i-1]+1]){
            dp[i]=dp[i-1]+1;
        }else{
            dp[i]=dp[i-1];
        }
    }
    cout<<dp[m];
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
