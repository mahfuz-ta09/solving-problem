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

    if(n%2==1){
        cout<<"NO";
    }else{
        string st;
        cout<<"YES";
        nl;

        for(i=1;i<=n/2;i++){
            if(i%2==0){
                for(j=0;j<2;j++){
                    st+='B';
                }
            }else{
                for(j=0;j<2;j++){
                    st+='A';
                }
            }
        }
        cout<<st;
    }
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


