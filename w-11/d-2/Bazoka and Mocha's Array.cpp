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
    ll i,j,n,pos=0;
    cin>>n;

    vector<ll> v(n+1);
    for(i=1;i<=n;i++)cin>>v[i];

    for(i=1;i<=n;i++){
        if(v[i]>v[i+1]){
            pos=i;
            break;
        }
    }


    if(pos==0){
        yes;
    }else{
        ll fl = 0;

        for(i=pos+1;i<=n;i++){
            j=(i%n)+1;
            if(v[i]>v[j])fl=1;
        }


        if(fl==0){
            yes;
        }else{
            no;
        }
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


