#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll maxN = (1LL << 15);
vector<ll> allPal;

bool isPalindrom(ll x){
    string s=to_string(x),t;
    t=s;
    reverse(t.begin(),t.end());

    return t==s;
}

void markPal(){
    for(ll i=0;i<maxN;i++){
        if(isPalindrom(i)){
            allPal.push_back(i);
        }
    }

}

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n;

    vector<ll> v(n),cnt(maxN+1);
    for(i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }

    for(i=0;i<n;i++){
        for(j=0;j<allPal.size();j++){
            ll cur = (v[i]^allPal[j]);
            ans+=cnt[cur];
        }
    }
    cout<<ans/2;
    nl;
}

int main(){
    iOS
    ll t;
    markPal();
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


