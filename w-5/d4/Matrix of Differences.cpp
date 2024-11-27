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

    vector<vector<ll>> v(n,vector<ll>(n));
    int l=1,r=n*n;
    bool k=false;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(k){
                v[i][j]=l++;
            }else{
                v[i][j]=r--;
            }
            k=!k;
        }

        if(i%2!=0){
            reverse(v[i].begin(),v[i].end());
        }
    }


    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            cout<<v[i][j];
            if(j<n-1)cout << " ";
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


