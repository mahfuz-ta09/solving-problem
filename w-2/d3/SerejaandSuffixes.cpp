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

    vector<int>v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
    }

    while(m--){
        set<int> st;
        ll c;
        cin>>c;
        for(i=c-1;i<n;i++){
            st.insert(v[i]);
        }
        cout<<st.size();
        nl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}


