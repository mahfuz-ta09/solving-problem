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

    priority_queue<ll>pq;
    ll ans = 0;

    for(i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a==0){
            if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        }else{
            pq.push(a);
        }
    }

    cout<<ans;
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

