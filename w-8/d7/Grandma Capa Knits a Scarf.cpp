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
    //vector<ll> v(n);
    string s;
    cin>>s;
    ans=n+1;
    for(i=0;i<26;i++){
        ll cnt=0,l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                r--,l++;
            }else if(s[l]==char('a'+i)){
                cnt++,l++;
            }else if(s[r]==char('a'+i)){
                cnt++,r--;
            }else{
                cnt=n+1;
                break;
            }
        }
        ans=min(cnt,ans);
    }
    if(ans==n+1)ans=-1;
    cout<<ans;
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


