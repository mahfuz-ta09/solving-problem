#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , x,k=0;
    cin >> n;
    vector<ll> v(n),ans;

    for(i=0 ; i<n ; i++){
        cin>>v[i];
    }

    vector<pair<ll,string>>st;

    for(i=0 ; i<n ; i++){
        ll a;
        string ss;
        cin>>a>>ss;
        st.push_back({a,ss});
    }

    for(auto [x,y]:st){
        for(i=0 ; i<x ;  i++){
            if(y[i]=='U'){
                v[k]--;
            }else{
                v[k]++;
            }
        }

        if(v[k]>9){
            ans.push_back(v[k]-10);
        }else if(v[k]<0){
            ans.push_back(10+v[k]);
        }else{
            ans.push_back(v[k]);
        }

        k++;
    }

    vec(ans);
    nl;
}

int main(){
    ll t;
    //t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}


