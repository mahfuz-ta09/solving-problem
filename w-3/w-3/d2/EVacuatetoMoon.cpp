#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll n,i,m,p;
    cin>>n>>m>>p;

    priority_queue<ll>car;
    priority_queue<ll>cg;

    for(i=0;i<n;i++){
        ll x;
        cin>>x;
        car.push(x);
    }

    for(i=0;i<m;i++){
        ll x;
        cin>>x;
        cg.push(x);
    }


    ll ans = 0;
    while(!car.empty() && !cg.empty()){
        ll tmp = cg.top()*p;
        if(car.top()>=tmp){
            ans+=tmp;
        }else{
            ans+=car.top();
        }

        car.pop();
        cg.pop();
    }

    cout<<ans;
    nl;

}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}


