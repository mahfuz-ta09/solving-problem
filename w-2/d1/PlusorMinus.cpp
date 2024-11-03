#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll a,b,c;

    cin >> a >> b >> c;

    if(a-b==c){
        cout<<"-\n";
    }else{
        cout<<"+\n";
    }

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


