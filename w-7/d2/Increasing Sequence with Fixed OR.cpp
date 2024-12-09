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
    ll i,j,n,m,p,ans=0;
    cin>>n;

    deque<ll>v;

    for(i=0;i<=__lg(n);i++){
        if((n>>i)&1){
            ll val = n-(1LL << i);
            if(val>0){
                v.push_front(val);
            }
        }
    }

    v.push_back(n);
    cout<<v.size();
    nl;
    for(auto a:v){
        cout<<a<<" ";
    }
    nl;
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


