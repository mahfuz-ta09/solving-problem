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

    map<ll,ll>mp;
    for(i=0;i<n;i++){
        ll a;
        cin>>a;
        mp[a]++;
    }

    priority_queue<ll>pq;

    for(auto [a,b]:mp){
        pq.push(b);
    }

    while(!pq.empty()){
        if(pq.size()<2){
            break;
        }
            ll x,y;
            x = pq.top();
            pq.pop();

            y = pq.top();
            pq.pop();

            x--;
            y--;

            if(x>=1)pq.push(x);
            if(y>=1)pq.push(y);

    }

    ll ans = 0;
    while(!pq.empty()){
        ans += pq.top();
        pq.pop();
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


