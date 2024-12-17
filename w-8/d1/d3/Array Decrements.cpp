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
    ll i,j,n,m,p,ans=0,curr=0;
    cin>>n;

    vector<ll>v(n),b(n);
    for(i=0;i<n;i++)cin>>v[i];

    bool possible=true;

    curr=1e9;
    for(i=0;i<n;i++){
        cin>>b[i];

        if(b[i]>v[i])possible=false;
        if(b[i]>0)curr=min(curr,v[i]-b[i]);
    }


    for(i=0;i<n;i++){
        if(v[i]-b[i]>curr)possible=false;
        if(b[i]!=0 && v[i]-b[i]<curr)possible=false;
    }


    cout<<(possible?"YES":"NO");
    nl;
}

//5 3 7 2
//1 1 1 1
//4 2 6 1

int main(){
    iOS
    ll t;
    //t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}

