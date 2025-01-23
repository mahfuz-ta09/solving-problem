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

    if(n==3){
        no;
    }else{
        yes;
        if(n%2==0){
            for(i=0;i<n;i++){
                if(i%2==0){
                    cout<<-1<<" ";
                }else{
                    cout<<1<<" ";
                }
            }
        }else{
            ll v=(n-1)/2;

            for(i=0;i<n;i++){
                if(i%2==0){
                    cout<<v-1<<" ";
                }else{
                    cout<<-v<<" ";
                }
            }
        }
        nl;
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

