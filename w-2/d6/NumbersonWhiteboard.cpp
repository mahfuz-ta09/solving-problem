#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , m;
    cin>>n;

    ll cur = n;

    cout<<2;
    nl;
    for(i=n-1;i>=1;i--){
        cout<<cur<<" "<<i;
        cur = (cur+i+1)/2;
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


