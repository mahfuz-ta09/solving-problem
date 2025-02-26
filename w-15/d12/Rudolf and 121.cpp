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
    cin>>n;
    vector<int>a(n);

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n-2;i++){
        if(a[i]<0) {
            no;
            return;
        }
        ll op=a[i];
        a[i]-=op;
        a[i+1]-=2*op;
        a[i+2]-=op;
    }

    if(a[n-1]!=0||a[n-2]!=0){
        no;
    }else{
        yes;
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
