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
    ll i,n,m,p,ans=0;
    cin>>n;

    set<ll>st;

    for(i=0;i<n;i++){
        ll x;
        cin>>x;
        st.insert(x);
    }

    for(auto a:st){
        cout<<a<<" ";
    }


    m = st.size();

    cout<<n-m;
    nl;

}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}
