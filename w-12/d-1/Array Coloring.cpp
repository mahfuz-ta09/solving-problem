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
    ll i,j,n,m,p=0,ans=0;
    cin>>n;
    vector<ll> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
        p+=v[i];
    }

    for(i=0;i<n;i++){
        if((v[i]%2==0) && ((p-v[i])%2==0)){
            ans=1;
            break;
        }else if((v[i]%2!=0) && ((p-v[i])%2!=0)){
            ans=1;
            break;
        }
    }

    if(ans==1){
        yes;
    }else{
        no;
    }
}

int main(){
    iOS
    ll t;
    cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


