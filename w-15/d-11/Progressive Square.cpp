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
    ll i,j,n,m,p,ans=0,c,d;
    cin>>n>>c>>d;
    vector<ll> a(n * n);

    for(i=0;i<n*n;++i) {
        cin>>a[i];
    }

    srt(a);
    vector<ll>b(n * n);

    b[0] = a[0];

    for(i=1;i<n;++i) {
        b[i] = b[i - 1] + c;
    }

    for(i = 1; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            b[i * n + j] = b[(i - 1) * n + j] + d;
        }
    }

    srt(b);

    if(a==b){
        yes;
    }else{
        no;
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

