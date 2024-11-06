#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , x =  2*10e5;
    cin>>n;

    multiset<int>ms;
    while(n--){
        ll a;
        cin>>a;
        x=min(x,a);
        ms.insert(a);
    }
    ll ans = 1;

    for(int a:ms){
        //cout<<a<<" ";

        if(a>=ans){
            ans++;
        }
    }

    cout<<ans-1;
    nl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    t = 1;

    while(t--){
        solve();
    }

    return 0;
}


