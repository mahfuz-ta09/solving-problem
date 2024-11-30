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
    ll i,j,n,k,m,p,ans=0;
    cin>>n>>k;

    string ss;
    cin>>ss;

    i=0;

    while(i<n){
        j=i+1;

        while(j<n && ss[j]!='1'){
            j++;
        }

        ll l = ss[i]=='1'? k : 0;
        ll r = j<n&&ss[j]=='1'? k : 0;
        ll len = j-i;

        if(l==k) len--;
        len-=l+r;

        if(len>0){
            ans+=(len+k)/(k+1);
        }
        i=j;
    }
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


