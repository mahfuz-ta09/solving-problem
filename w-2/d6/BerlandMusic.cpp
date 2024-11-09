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

    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    string s;
    cin>>s;

    vector<tuple<char,ll,ll>>dislike;
    for(i=0;i<n;i++){
        dislike.push_back({s[i],v[i],i});
    }

    sort(dislike.begin(),dislike.end());


    vector<ll>ans(n);
    for(i=0;i<n;i++){
        ans[get<2>(dislike[i])]= i+1;
    }

    vec(ans);
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

