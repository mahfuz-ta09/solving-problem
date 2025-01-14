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
    ll i,j,n,a,b,ans=0;
    cin>>n>>a>>b;

    if(a*2<=b){
        cout<<n*a;
    }else{
        if(n==1){
            cout<<a;
        }else{
            if(n%2==0){
                cout<<b*(n/2);
            }else{
                cout<<b*(n/2)+a;
            }
        }
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


