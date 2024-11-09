#include<bits/stdc++.h>
#define ll long long int
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define nl cout<<"\n"
#define vec(x) for(auto a:x)cout<<a<<" "
using namespace std;

void solve(){
    ll n ,i , m=0;
    cin>>n;

    vector<ll>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    ll lw=0,hi=n-1;
    ll mn=1,mx=n;

    while(lw<=hi){
        if(v[lw]==mn&&v[hi]==mx || v[lw]==mx&&v[hi]==mn){
            mn++,mx--;
            lw++,hi--;
        }else if(v[hi]==mx){
            mx--,hi--;
        }else if(v[hi]==mn){
            hi--,mn++;
        }else if(v[lw]==mn){
            lw++;mn++;
        }else if(v[lw]==mx){
            lw++,mx--;
        }else{
            cout<<lw+1<<" "<<hi+1;
            nl;
            m=1;
            break;
        }
    }

    if(m==0){
        cout<<-1;
        nl;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}


