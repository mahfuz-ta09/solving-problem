#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll n,i,m,p;
    cin>>n;

    vector<ll>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    srt(v);

    if(n==1){
        yes;
    }else if(n==2){
        if(v[0]==v[1] || v[0]==0 || v[1]==0){
            yes;
        }else{
            no;
        }
    }else{
        ll c=0;
        for(i=0;i<n-1;i++){
            if(v[0]==0){
                continue;
            }else if(v[i]!=v[i+1]){
                c=1;
                break;
            }
        }

        if(c==0){
            yes;
        }else{
            no;
        }
    }
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}
