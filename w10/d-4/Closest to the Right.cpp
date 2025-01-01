#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll binary(vector<ll> &v,ll l,ll r,ll t){
    ll res=-1;
    while(l<=r){
        ll md=l+(r-l)/2;

        if(v[md]>=t){
            res=md+1;
            r=md-1;
        }else{
            l=md+1;
        }
    }

    return res==-1? v.size()+1:res;
}


void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n>>m;
    vector<ll> v(n),b(m);

    for(i=0;i<n;i++)cin>>v[i];
    for(i=0;i<m;i++)cin>>b[i];


    p=0;
    while(p<m){
        cout<<binary(v,0,n-1,b[p]);
        p++;
        nl;
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


