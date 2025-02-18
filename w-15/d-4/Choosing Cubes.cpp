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
    ll i,j,n,m,p,ans=0,f,k;
    cin>>n>>f>>k;
    f--;
    k--;

    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = a[f];
    sort(a.rbegin(),a.rend());

    if(a[k]>x) {
        no;
    }else if(a[k]<x) {
        yes;
    }else{
        if(k==n-1||a[k + 1]<x) {
            yes;
        } else {
            cout<<"MAYBE"<<"\n";
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


