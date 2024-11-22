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
    ll i,j,n,m,p,ans=-1,r=0,l=0;
    string ss;
    cin>>ss>>n;

    m=ss.size();
    map<char,ll>cnt;

    while(r<m){
        cnt[ss[r]]++;
        if(cnt.size()==n){
            ans=max(ans,r-l+1);
        }else{
            while(cnt.size()>n && l<=r){
                cnt[ss[l]]--;
                if(cnt[ss[l]]==0){
                    cnt.erase(ss[l]);
                }
                l++;
            }
        }
        r++;
    }

    cout<<ans;
    nl;
}

int main(){
    iOS
    ll t;
    t=1;
    //cin >> t;
    while(t--)solve();
    //getline(cin,ss);
    return 0;
}


