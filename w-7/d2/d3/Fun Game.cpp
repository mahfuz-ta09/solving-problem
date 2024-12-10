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

    string s,t;
    cin>>s>>t;

    if(s==t || s[0]=='1'){
        yes
    }else{
        ll pos=-1;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                pos=i;
                break;
            }
        }

        if(pos!=-1){
            bool ok=true;
            for(i=0;i<n;i++){
                if(s[i]!=t[i]){
                    if(pos>i){
                        ok=false;
                        break;
                    }
                }
            }
            if(ok){
                yes
            }else{
                no
            }
        }else{
            no
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

