
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int id=0;

    while(id<n&&s[id]=='1'){
        id++;
    }
    if(id==n){
        if(n==4){
            yes;
        }
        else{
            no;
        }
    }else{
        if((id-1)*(id-1)==n){
            yes;
        }else{
            no;
        }
    }
}

int main(){
    iOS
    ll t;
    t=1;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}

