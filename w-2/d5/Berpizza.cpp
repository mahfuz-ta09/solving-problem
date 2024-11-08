#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , m=1;
    cin>>n;

    set<pair<ll,ll>>s;
    multiset<pair<ll,ll>>mt;
    vector<ll>ans;

    for(i=1;i<=n;i++){
        ll action;
        cin>>action;

        if(action==1){
            ll value;
            cin>>value;
            s.insert({m,value});
            mt.insert({value,-m});
            m++;
        }else if(action==2){
            ll pos = s.begin()->first , money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            mt.erase({money,-pos});
        }else{
            ll pos = -mt.rbegin()->second,money = mt.rbegin()->first;
            ans.push_back(pos);
            mt.erase(--mt.end());
            s.erase({pos,money});
        }

    }

    vec(ans);
    nl;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    t=1;
    //cin >> t;

    while(t--){
        solve();
    }

    return 0;
}

