#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , m;
    cin >> n >> m;
    string s;
    cin>>s;

    map<char,int> mp;

    for(i=0 ; i<n ; i++){
        mp[s[i]]++;
    }

    ll odCnt = 0;

    for(auto [x,y]:mp){
        if(y%2!=0)odCnt++;
    }

    cout<<odCnt;
    nl;
    if(odCnt-m==1){
        yes;
        nl;
    }else{
        no;
        nl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;

    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

