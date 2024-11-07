#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , m;
    cin>>n>>m;

    map<ll,vector<ll>> mp;

    for(i=0;i<n;i++){
        ll a;
        cin>>a;
        mp[a].push_back(i);
    }

    while(m--){
        ll b,c;
        cin>>b>>c;

        ll inB = mp[b].empty() ? -1 : mp[b][0];
        ll szC = mp[c].size()-1;
        ll inC = mp[c].empty() ? -1 : mp[c][szC];

        if(inB!=-1 && inC!=-1){
            if(inB<inC){
                yes;
            }else{
                no;
            }
        }else{
            no;
        }
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

