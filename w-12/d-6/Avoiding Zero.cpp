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
    ll i,j,n,m,p=0,ne=0,ans=0;
    cin>>n;

    vector<ll> v(n);

    for(i=0;i<n;i++){
        cin>>v[i];
        ans+=v[i];
        if(v[i]>=0){
            p+=v[i];
        }else{
            ne+=(v[i]*-1);
        }
    }

    if(ans==0){
        no;
    }else{
        yes;

        if(p>ne){
            sort(v.rbegin(),v.rend());

            for(auto a:v){
                cout<<a<<" ";
            }
        }else{
            sort(v.begin(),v.end());
            for(auto a:v){
                cout<<a<<" ";
            }
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
