#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , m=0;
    cin>>n;

    map<int,int> mp;
    vector<int> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    for(auto [x,y]:mp){
        cout<<x<<" "<<y;
        nl;
        //m+=
    }

    //cout<<m;
    nl;
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


