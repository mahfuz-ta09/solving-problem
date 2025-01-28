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
    ll i,j,n,m,p,ans=0;

    char ch[8][8];
    vector<ll> v;

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='R')v.push_back(i);
        }
    }

    for(ll a:v){
        j=0;
        bool ok = true;

        while(ok && j<8){
            if(ch[a][j]!='R'){
                ok=false;
            }
            j++;
        }

        if(ok){
            cout<<'R';
            nl;
            return;
        }
    }

    cout<<'B';
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


