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
    ll i,j,a,b,p,ans=0;

    cin>>a>>b;
    b-=a;
    long long l=2,r=1000000000;
    while(l<r){
        long long m=(l+r)/2;
        if(m*(m-1)/2<=b){
            l=m+1;
        }else{
            r=m;
        }
    }
    cout<<l-1<<endl;

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

