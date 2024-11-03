#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    string ss,sp;
    cin >> ss >> sp;

    ll i , n ,k = 0 , ans= 0;
    n = ss.size();

    while(k<n){
        if(ss[k]!=sp[k])ans++;
        k++;
    }

    cout<<ans;

}

int main(){
    ll t;
    t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}


