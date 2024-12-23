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
    vector<ll> v(n),gcd(2,0);
    vector<bool> pos(2,true);

    for(i=0;i<n;i++)cin>>v[i];

    for(i=0;i<n;i++){
        gcd[i%2] = __gcd(gcd[i%2],v[i]);
    }


    for (i=0;i<n;i++) {
        if(i%2==0 && v[i]%gcd[0]==0) {
            pos[1] = false;
        }else if (i%2!=0 && v[i]%gcd[1]==0) {
            pos[0] = false;
        }
    }


    if (!pos[0] && !pos[1]) {
        cout << 0;
    } else if (!pos[0]) {
        cout << gcd[1];
    } else if (!pos[1]) {
        cout << gcd[0];
    }
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


