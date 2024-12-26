#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n;

    for(i=1;i*i<=n;i++){
        if(n%i==0 && lcm(i,n/i)==n){
            ans=i;
        }
    }
    cout<<ans<<" "<<n/ans;
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


