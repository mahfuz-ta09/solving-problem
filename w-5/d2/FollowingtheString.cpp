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
    cin>>n;
    vector<ll> v(26,0),b(n);

    for(i=0;i<n;i++){
        cin>>b[i];
    }

    string ss = "";
    for(i=0;i<n;i++){
        for(j=0;j<26;j++){
            if(v[j]==b[i]){
                v[j]++;
                ss+=char('a'+j);
                break;
            }
        }
    }

    cout<<ss;
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

