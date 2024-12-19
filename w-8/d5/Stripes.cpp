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

    char s[8][8];
    vector<ll>r;

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cin>>s[i][j];
            if(s[i][j]=='R')r.push_back(i);
        }
    }

    for(auto k:r){
        j=0;
        bool ok=true;
        while(ok && j<8){
        //cout<<"hell";
            if(s[k][j]!='R'){
            //cout<<"hell";
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
    //t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


