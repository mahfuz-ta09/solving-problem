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
        ll n,s,m;
        cin>>n>>s>>m;
        ll prev=0;
        ll res=false;

        for(ll p=0;p<n;p++) {
            ll left,right;
            cin>>left>>right;

            if(prev+s<=left) {
                res = true;
            }
            prev=right;
        }

        if (prev+s<=m) {
            res=true;
        }

        if(res){
            yes;
        }else{
            no;
        }

}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


