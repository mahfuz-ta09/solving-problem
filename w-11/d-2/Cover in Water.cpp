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
    ll i,j,n,p=0,ans=0;
    cin>>n;
    string s;
    cin>>s;

    for(i=0;i<n;i++){
        if(s.substr(i,3)=="..."){
            ans+=2;
            break;
        }
    }

    if(ans){
        cout<<ans;
    }else{
        for(char a:s){
            if(a=='.')p+=1;
        }

        cout<<p;
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


