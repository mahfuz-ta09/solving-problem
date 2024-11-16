#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define cig cin.ignore();
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n>>m;

    ll lft=1,rht=n;
    cig;

    for (i = 0; i < m; i++) {
        string ss,dir;
        ll val;

        getline(cin,ss);

        stringstream st(ss);
        string tmp;

        st>>tmp>>tmp>>dir>>tmp>>val;

        if(dir=="left"){
            rht=min(rht,val-1);
        }else{
            lft=max(lft,val+1);
        }
    }

    if(lft>rht){
        cout<<-1;
    }else{
        cout<<rht-lft+1;
    }
    nl;
}


int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    return 0;
}

