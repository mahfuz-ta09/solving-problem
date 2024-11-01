#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n , counter = 0;
    cin>>n;
    set<pair<string,string>> mp;

    while(n--){
        string a,b;
        cin>>a>>b;

        mp.insert({a,b});
    }

    cout<<mp.size();
}


int main(){
    ll t;
    t=1;
    //cin>>t;

    while(t--){
        solve();
    }

    return 0;
}

