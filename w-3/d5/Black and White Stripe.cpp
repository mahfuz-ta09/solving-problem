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
    ll i,j,n,m,p,ans=0,wCnt=0,bCnt=0;
    cin>>n>>m;

    string ss;
    cin>>ss;

    vector<ll> v(n+1);

    for(i=1;i<=n;i++){
        v[i] = v[i-1]+int(ss[i-1]=='W');
    }


    ll result = INT_MAX;

    for(i=m;i<=n;i++){
        result = min(result,v[i]-v[i-m]);
    }
    cout<<result;
    nl;
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    return 0;
}

