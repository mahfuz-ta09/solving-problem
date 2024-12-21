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

    vector<ll> v(n),b(n),dif(n);

    for(i=0;i<n;i++)cin>>v[i];
    for(i=0;i<n;i++)cin>>b[i];


    for(i=0;i<n;i++){
        dif[i]=b[i]-v[i];
    }

    //srt(dif);
    sort(dif.rbegin(),dif.rend());
    //vec(dif);

    ll l=0,r=n-1;


    while(l<r){
        if(dif[l]+dif[r]>=0){
            ans++;
            l++;
            r--;
        }else{
            r--;
        }
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


