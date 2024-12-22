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
    ll i=0,j=0,n,m=0,p,ans=0;
    cin>>n;
    //vector<ll> v(n);
    string s;
    cin>>s;

    for(p=0;p<4*n;p++){
        if(s[p]=='A'){
            i++;
        }else if(s[p]=='B'){
            j++;
        }else if(s[p]=='C'){
            ans++;
        }else if(s[p]=='D'){
            m++;
        }
    }

    cout<<min(i,n)+min(j,n)+min(ans,n)+min(m,n);
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


