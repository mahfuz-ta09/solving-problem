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
    cin>>n>>p;
    vector<ll> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }


    for(i=0;i<n;i++){
        if(v[i]%p != i%p){
            ans++;
        }
    }

    if(ans==0){
        cout<<0;
    }else if(ans==2){
        cout<<1;
    }else{
        cout<<-1;
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
