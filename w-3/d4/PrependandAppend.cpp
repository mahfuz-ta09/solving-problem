
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
    ll i,j,n,m,p,ans;

    cin>>n;
    string ss;
    cin>>ss;
    i=0;
    j=n-1;
    ans=n;

    while(ss[i]!=ss[j] && ans>0){
        i++;
        j--;
        ans-=2;
    }

    cout<<ans;
    nl;
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}

