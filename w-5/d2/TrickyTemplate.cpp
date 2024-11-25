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

    string ss,st,sd;
    cin>>ss>>st>>sd;

    i=0;
    bool pr = false;

    while(i<n){
        if(ss[i]==st[i] && ss[i]==sd[i]){
            pr=true;
            cout<<"yo ";
        }else if(ss[i]!=st[i] && ss[i]!=sd[i] && st[i]!=sd[i]){
            pr=true;
            cout<<"ye ";
        }

        i++;
    }

    cout<<(pr? "YES":"NO");
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


