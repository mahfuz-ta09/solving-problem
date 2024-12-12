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
    ll i,j,n,m,p,ans=1;
    cin>>n;
    int a = 1;
    int b = 0;
    int cnt = 0;
    while (a*2<=n){
        a = a*2;
        cnt++;
    }


    bool check = false;
    for(i=cnt-1;i>=0;i--) {
        if ((n&1<<i)){
            b = b | (1<<i);
            check = true;
        } else {
            if (check) ans = ans * 2;
        }
    }

    cout<<ans;
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
