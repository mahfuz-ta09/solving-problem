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
    vector<ll> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
    }

    bool exist = false;

    for(i=0;i<(1<<n);i++){
        ans=0;
        for(j=0;j<n;j++){
            if((i>>j)&1){
                ans+=v[j];
            }else{
                ans-=v[j];
            }
        }

        if(ans%360==0){
            exist=true;
            break;
        }
    }

    if(exist){
        yes;
    }else{
        no;
    }

}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


