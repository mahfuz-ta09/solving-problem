#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , x;
    cin >> n >> x;

    vector<int>v(n) , ans;
    for(i=0 ; i<n ; i++)cin>>v[i];

    for(i=0 ; i<n ; i++){
        if(v[i]!=x)ans.push_back(v[i]);
    }

    vec(ans);
}

int main(){
    solve();
    return 0;
}
