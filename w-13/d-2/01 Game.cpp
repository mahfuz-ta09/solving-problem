#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" ";cout<<"\n";
#define srt(v) sort(v.begin(),v.end());
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9 + 7;

void solve(){
    ll i,j,n,z=0,o=0,ans=0;
    string s;
    cin>>s;

    n=s.size();

    for(i=0;i<n;i++){
        if(s[i]=='0'){
            o++;
        }else{
            z++;
        }
    }

    ll trn=min(z,o);

    if(trn==0 || trn%2==0){
        cout<<"NET";
    }else{
        cout<<"DA";
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


