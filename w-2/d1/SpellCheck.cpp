#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;


void solve(){
    string timur = "Timru";
    ll t;
    cin>>t;

    string ss;
    cin >> ss;
    sort(ss.begin(),ss.end());

    if(timur == ss){
        yes;
    }else{
        no;
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


