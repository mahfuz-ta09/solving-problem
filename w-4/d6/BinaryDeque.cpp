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
    ll i,j,n,m,p=0,ans=0;
    cin>>n>>m;

    vector<ll> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1)p++;
    }

    if(p<m){
        cout<<-1;
    }else{
        ll l=0,r=0,len=0;

        while(r<n){
            ans+=v[r];

            while(ans>m){
                ans-=v[l];
                l++;
            }

            if(ans==m){
                len=max(len,r-l+1);
            }

            r++;
        }

        cout<<n-len;
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



