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

ll mex(vector<ll> &a){
    ll cnt=0,i;

    srt(a);

    for(i=0;i<a.size();i++){
        if(cnt==a[i]){
            cnt++;
        }else{
            break;
        }
    }


    return cnt;
}

void solve(){
    ll i,j,n,m,p,ans=0;
    cin>>n;

    unordered_map<ll,ll> mp;
    vector<ll> v,b;

    for(i=0;i<n;i++){
        ll x;
        cin>>x;

        if(mp[x]==0){
            v.push_back(x);
        }else if(mp[x]==1){
            b.push_back(x);
        }

        mp[x]++;
    }

    ans=mex(v)+mex(b);
    cout<<ans;
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

