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
    ll n,i,cnt=0;
    string s;
    cin>>n>>s;

    for(i=0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='0') cnt+=2;
    }
    if(s[n-1]=='0' && cnt) cnt--;
    cout<<cnt;
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


