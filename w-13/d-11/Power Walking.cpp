#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n;

    set<ll> st;
    vector<ll>v(n+1);

    for(i=1;i<=n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }

    for(i=1;i<=n;i++){
        cout<<(int)st.size() + max(0,(int)i-(int)st.size())<<" ";
    }
    nl;
}

int main(){
    iOS
    ll t;
    //t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


