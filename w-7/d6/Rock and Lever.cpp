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


    for(i=29;i>=0;i--){
        ll cnt=0;
        for(j=0;j<n;j++){
            if(v[j]>=(1<<i)&&v[j]<(1<<(i+1))){
                cnt++;
            }
        }
        ans+=cnt*(cnt-1)/2;
    }

    cout<<ans;
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

